// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccountaliasresponse.h"
#include "deleteaccountaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteAccountAliasResponse
 * \brief The DeleteAccountAliasResponse class provides an interace for Iam DeleteAccountAlias responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::deleteAccountAlias
 */

/*!
 * Constructs a DeleteAccountAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccountAliasResponse::DeleteAccountAliasResponse(
        const DeleteAccountAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteAccountAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteAccountAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccountAliasRequest * DeleteAccountAliasResponse::request() const
{
    Q_D(const DeleteAccountAliasResponse);
    return static_cast<const DeleteAccountAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteAccountAlias \a response.
 */
void DeleteAccountAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccountAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteAccountAliasResponsePrivate
 * \brief The DeleteAccountAliasResponsePrivate class provides private implementation for DeleteAccountAliasResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteAccountAliasResponsePrivate object with public implementation \a q.
 */
DeleteAccountAliasResponsePrivate::DeleteAccountAliasResponsePrivate(
    DeleteAccountAliasResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteAccountAlias response element from \a xml.
 */
void DeleteAccountAliasResponsePrivate::parseDeleteAccountAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccountAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
