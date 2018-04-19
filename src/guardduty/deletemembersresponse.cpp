/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletemembersresponse.h"
#include "deletemembersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::DeleteMembersResponse
 * \brief The DeleteMembersResponse class provides an interace for GuardDuty DeleteMembers responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::deleteMembers
 */

/*!
 * Constructs a DeleteMembersResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMembersResponse::DeleteMembersResponse(
        const DeleteMembersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new DeleteMembersResponsePrivate(this), parent)
{
    setRequest(new DeleteMembersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMembersRequest * DeleteMembersResponse::request() const
{
    Q_D(const DeleteMembersResponse);
    return static_cast<const DeleteMembersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty DeleteMembers \a response.
 */
void DeleteMembersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteMembersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::DeleteMembersResponsePrivate
 * \brief The DeleteMembersResponsePrivate class provides private implementation for DeleteMembersResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a DeleteMembersResponsePrivate object with public implementation \a q.
 */
DeleteMembersResponsePrivate::DeleteMembersResponsePrivate(
    DeleteMembersResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty DeleteMembers response element from \a xml.
 */
void DeleteMembersResponsePrivate::parseDeleteMembersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMembersResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
