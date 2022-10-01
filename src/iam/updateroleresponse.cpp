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

#include "updateroleresponse.h"
#include "updateroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateRoleResponse
 * \brief The UpdateRoleResponse class provides an interace for Iam UpdateRole responses.
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
 * \sa IamClient::updateRole
 */

/*!
 * Constructs a UpdateRoleResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRoleResponse::UpdateRoleResponse(
        const UpdateRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateRoleResponsePrivate(this), parent)
{
    setRequest(new UpdateRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRoleRequest * UpdateRoleResponse::request() const
{
    Q_D(const UpdateRoleResponse);
    return static_cast<const UpdateRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateRole \a response.
 */
void UpdateRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateRoleResponsePrivate
 * \brief The UpdateRoleResponsePrivate class provides private implementation for UpdateRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateRoleResponsePrivate object with public implementation \a q.
 */
UpdateRoleResponsePrivate::UpdateRoleResponsePrivate(
    UpdateRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateRole response element from \a xml.
 */
void UpdateRoleResponsePrivate::parseUpdateRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
