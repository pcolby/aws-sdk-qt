/*
    Copyright 2013-2018 Paul Colby

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

#include "listinputsecuritygroupsresponse.h"
#include "listinputsecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsResponse
 * \brief The ListInputSecurityGroupsResponse class provides an interace for MediaLive ListInputSecurityGroups responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputSecurityGroups
 */

/*!
 * Constructs a ListInputSecurityGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputSecurityGroupsResponse::ListInputSecurityGroupsResponse(
        const ListInputSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new ListInputSecurityGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputSecurityGroupsRequest * ListInputSecurityGroupsResponse::request() const
{
    Q_D(const ListInputSecurityGroupsResponse);
    return static_cast<const ListInputSecurityGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListInputSecurityGroups \a response.
 */
void ListInputSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListInputSecurityGroupsResponsePrivate
 * \brief The ListInputSecurityGroupsResponsePrivate class provides private implementation for ListInputSecurityGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputSecurityGroupsResponsePrivate object with public implementation \a q.
 */
ListInputSecurityGroupsResponsePrivate::ListInputSecurityGroupsResponsePrivate(
    ListInputSecurityGroupsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListInputSecurityGroups response element from \a xml.
 */
void ListInputSecurityGroupsResponsePrivate::parseListInputSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputSecurityGroupsResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
