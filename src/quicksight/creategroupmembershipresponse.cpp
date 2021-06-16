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

#include "creategroupmembershipresponse.h"
#include "creategroupmembershipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateGroupMembershipResponse
 * \brief The CreateGroupMembershipResponse class provides an interace for QuickSight CreateGroupMembership responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createGroupMembership
 */

/*!
 * Constructs a CreateGroupMembershipResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGroupMembershipResponse::CreateGroupMembershipResponse(
        const CreateGroupMembershipRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateGroupMembershipResponsePrivate(this), parent)
{
    setRequest(new CreateGroupMembershipRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGroupMembershipRequest * CreateGroupMembershipResponse::request() const
{
    Q_D(const CreateGroupMembershipResponse);
    return static_cast<const CreateGroupMembershipRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateGroupMembership \a response.
 */
void CreateGroupMembershipResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGroupMembershipResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateGroupMembershipResponsePrivate
 * \brief The CreateGroupMembershipResponsePrivate class provides private implementation for CreateGroupMembershipResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateGroupMembershipResponsePrivate object with public implementation \a q.
 */
CreateGroupMembershipResponsePrivate::CreateGroupMembershipResponsePrivate(
    CreateGroupMembershipResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateGroupMembership response element from \a xml.
 */
void CreateGroupMembershipResponsePrivate::parseCreateGroupMembershipResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupMembershipResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
