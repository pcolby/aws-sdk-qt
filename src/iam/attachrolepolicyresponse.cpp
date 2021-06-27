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

#include "attachrolepolicyresponse.h"
#include "attachrolepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::AttachRolePolicyResponse
 * \brief The AttachRolePolicyResponse class provides an interace for IAM AttachRolePolicy responses.
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
 * \sa IamClient::attachRolePolicy
 */

/*!
 * Constructs a AttachRolePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
AttachRolePolicyResponse::AttachRolePolicyResponse(
        const AttachRolePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new AttachRolePolicyResponsePrivate(this), parent)
{
    setRequest(new AttachRolePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachRolePolicyRequest * AttachRolePolicyResponse::request() const
{
    return static_cast<const AttachRolePolicyRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM AttachRolePolicy \a response.
 */
void AttachRolePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AttachRolePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::AttachRolePolicyResponsePrivate
 * \brief The AttachRolePolicyResponsePrivate class provides private implementation for AttachRolePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a AttachRolePolicyResponsePrivate object with public implementation \a q.
 */
AttachRolePolicyResponsePrivate::AttachRolePolicyResponsePrivate(
    AttachRolePolicyResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM AttachRolePolicy response element from \a xml.
 */
void AttachRolePolicyResponsePrivate::parseAttachRolePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachRolePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
