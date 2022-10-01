// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccountaliasesresponse.h"
#include "listaccountaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAccountAliasesResponse
 * \brief The ListAccountAliasesResponse class provides an interace for Iam ListAccountAliases responses.
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
 * \sa IamClient::listAccountAliases
 */

/*!
 * Constructs a ListAccountAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccountAliasesResponse::ListAccountAliasesResponse(
        const ListAccountAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new ListAccountAliasesResponsePrivate(this), parent)
{
    setRequest(new ListAccountAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccountAliasesRequest * ListAccountAliasesResponse::request() const
{
    Q_D(const ListAccountAliasesResponse);
    return static_cast<const ListAccountAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam ListAccountAliases \a response.
 */
void ListAccountAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccountAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::ListAccountAliasesResponsePrivate
 * \brief The ListAccountAliasesResponsePrivate class provides private implementation for ListAccountAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAccountAliasesResponsePrivate object with public implementation \a q.
 */
ListAccountAliasesResponsePrivate::ListAccountAliasesResponsePrivate(
    ListAccountAliasesResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam ListAccountAliases response element from \a xml.
 */
void ListAccountAliasesResponsePrivate::parseListAccountAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccountAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
