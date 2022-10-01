// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccountaliasresponse.h"
#include "createaccountaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateAccountAliasResponse
 * \brief The CreateAccountAliasResponse class provides an interace for Iam CreateAccountAlias responses.
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
 * \sa IamClient::createAccountAlias
 */

/*!
 * Constructs a CreateAccountAliasResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAccountAliasResponse::CreateAccountAliasResponse(
        const CreateAccountAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new CreateAccountAliasResponsePrivate(this), parent)
{
    setRequest(new CreateAccountAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAccountAliasRequest * CreateAccountAliasResponse::request() const
{
    Q_D(const CreateAccountAliasResponse);
    return static_cast<const CreateAccountAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam CreateAccountAlias \a response.
 */
void CreateAccountAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAccountAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::CreateAccountAliasResponsePrivate
 * \brief The CreateAccountAliasResponsePrivate class provides private implementation for CreateAccountAliasResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateAccountAliasResponsePrivate object with public implementation \a q.
 */
CreateAccountAliasResponsePrivate::CreateAccountAliasResponsePrivate(
    CreateAccountAliasResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam CreateAccountAlias response element from \a xml.
 */
void CreateAccountAliasResponsePrivate::parseCreateAccountAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAccountAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
