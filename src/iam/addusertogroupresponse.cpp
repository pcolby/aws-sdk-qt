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

#include "addusertogroupresponse.h"
#include "addusertogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AddUserToGroupResponse
 * \brief The AddUserToGroupResponse class provides an interace for Iam AddUserToGroup responses.
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
 * \sa IamClient::addUserToGroup
 */

/*!
 * Constructs a AddUserToGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AddUserToGroupResponse::AddUserToGroupResponse(
        const AddUserToGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new AddUserToGroupResponsePrivate(this), parent)
{
    setRequest(new AddUserToGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddUserToGroupRequest * AddUserToGroupResponse::request() const
{
    Q_D(const AddUserToGroupResponse);
    return static_cast<const AddUserToGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam AddUserToGroup \a response.
 */
void AddUserToGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddUserToGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::AddUserToGroupResponsePrivate
 * \brief The AddUserToGroupResponsePrivate class provides private implementation for AddUserToGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AddUserToGroupResponsePrivate object with public implementation \a q.
 */
AddUserToGroupResponsePrivate::AddUserToGroupResponsePrivate(
    AddUserToGroupResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam AddUserToGroup response element from \a xml.
 */
void AddUserToGroupResponsePrivate::parseAddUserToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddUserToGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
