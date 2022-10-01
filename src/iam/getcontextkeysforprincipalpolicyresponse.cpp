// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontextkeysforprincipalpolicyresponse.h"
#include "getcontextkeysforprincipalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetContextKeysForPrincipalPolicyResponse
 * \brief The GetContextKeysForPrincipalPolicyResponse class provides an interace for Iam GetContextKeysForPrincipalPolicy responses.
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
 * \sa IamClient::getContextKeysForPrincipalPolicy
 */

/*!
 * Constructs a GetContextKeysForPrincipalPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetContextKeysForPrincipalPolicyResponse::GetContextKeysForPrincipalPolicyResponse(
        const GetContextKeysForPrincipalPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetContextKeysForPrincipalPolicyResponsePrivate(this), parent)
{
    setRequest(new GetContextKeysForPrincipalPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContextKeysForPrincipalPolicyRequest * GetContextKeysForPrincipalPolicyResponse::request() const
{
    Q_D(const GetContextKeysForPrincipalPolicyResponse);
    return static_cast<const GetContextKeysForPrincipalPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetContextKeysForPrincipalPolicy \a response.
 */
void GetContextKeysForPrincipalPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContextKeysForPrincipalPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetContextKeysForPrincipalPolicyResponsePrivate
 * \brief The GetContextKeysForPrincipalPolicyResponsePrivate class provides private implementation for GetContextKeysForPrincipalPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetContextKeysForPrincipalPolicyResponsePrivate object with public implementation \a q.
 */
GetContextKeysForPrincipalPolicyResponsePrivate::GetContextKeysForPrincipalPolicyResponsePrivate(
    GetContextKeysForPrincipalPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetContextKeysForPrincipalPolicy response element from \a xml.
 */
void GetContextKeysForPrincipalPolicyResponsePrivate::parseGetContextKeysForPrincipalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContextKeysForPrincipalPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
