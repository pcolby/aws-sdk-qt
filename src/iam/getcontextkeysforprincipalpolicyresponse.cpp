/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcontextkeysforprincipalpolicyresponse.h"
#include "getcontextkeysforprincipalpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::GetContextKeysForPrincipalPolicyResponse
 * \brief The GetContextKeysForPrincipalPolicyResponse class provides an interace for IAM GetContextKeysForPrincipalPolicy responses.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
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
    return static_cast<const GetContextKeysForPrincipalPolicyRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM GetContextKeysForPrincipalPolicy \a response.
 */
void GetContextKeysForPrincipalPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContextKeysForPrincipalPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::GetContextKeysForPrincipalPolicyResponsePrivate
 * \brief The GetContextKeysForPrincipalPolicyResponsePrivate class provides private implementation for GetContextKeysForPrincipalPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a GetContextKeysForPrincipalPolicyResponsePrivate object with public implementation \a q.
 */
GetContextKeysForPrincipalPolicyResponsePrivate::GetContextKeysForPrincipalPolicyResponsePrivate(
    GetContextKeysForPrincipalPolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM GetContextKeysForPrincipalPolicy response element from \a xml.
 */
void GetContextKeysForPrincipalPolicyResponsePrivate::parseGetContextKeysForPrincipalPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContextKeysForPrincipalPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
