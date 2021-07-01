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

#include "getrolepolicyresponse.h"
#include "getrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::GetRolePolicyResponse
 * \brief The GetRolePolicyResponse class provides an interace for IAM GetRolePolicy responses.
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
 * \sa IamClient::getRolePolicy
 */

/*!
 * Constructs a GetRolePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetRolePolicyResponse::GetRolePolicyResponse(
        const GetRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetRolePolicyResponsePrivate(this), parent)
{
    setRequest(new GetRolePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRolePolicyRequest * GetRolePolicyResponse::request() const
{
    Q_D(const GetRolePolicyResponse);
    return static_cast<const GetRolePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IAM GetRolePolicy \a response.
 */
void GetRolePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::GetRolePolicyResponsePrivate
 * \brief The GetRolePolicyResponsePrivate class provides private implementation for GetRolePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a GetRolePolicyResponsePrivate object with public implementation \a q.
 */
GetRolePolicyResponsePrivate::GetRolePolicyResponsePrivate(
    GetRolePolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM GetRolePolicy response element from \a xml.
 */
void GetRolePolicyResponsePrivate::parseGetRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRolePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
