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

#include "untagroleresponse.h"
#include "untagroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::UntagRoleResponse
 * \brief The UntagRoleResponse class provides an interace for IAM UntagRole responses.
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
 * \sa IamClient::untagRole
 */

/*!
 * Constructs a UntagRoleResponse object for \a reply to \a request, with parent \a parent.
 */
UntagRoleResponse::UntagRoleResponse(
        const UntagRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagRoleResponsePrivate(this), parent)
{
    setRequest(new UntagRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagRoleRequest * UntagRoleResponse::request() const
{
    return static_cast<const UntagRoleRequest *>(IamResponse::request());
}

/*!
 * \reimp
 * Parses a successful IAM UntagRole \a response.
 */
void UntagRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IAM::UntagRoleResponsePrivate
 * \brief The UntagRoleResponsePrivate class provides private implementation for UntagRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a UntagRoleResponsePrivate object with public implementation \a q.
 */
UntagRoleResponsePrivate::UntagRoleResponsePrivate(
    UntagRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a IAM UntagRole response element from \a xml.
 */
void UntagRoleResponsePrivate::parseUntagRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IAM
} // namespace QtAws
