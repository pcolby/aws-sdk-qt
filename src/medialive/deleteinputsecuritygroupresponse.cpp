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

#include "deleteinputsecuritygroupresponse.h"
#include "deleteinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupResponse
 * \brief The DeleteInputSecurityGroupResponse class provides an interace for MediaLive DeleteInputSecurityGroup responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteInputSecurityGroup
 */

/*!
 * Constructs a DeleteInputSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInputSecurityGroupResponse::DeleteInputSecurityGroupResponse(
        const DeleteInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteInputSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInputSecurityGroupRequest * DeleteInputSecurityGroupResponse::request() const
{
    Q_D(const DeleteInputSecurityGroupResponse);
    return static_cast<const DeleteInputSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteInputSecurityGroup \a response.
 */
void DeleteInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInputSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteInputSecurityGroupResponsePrivate
 * \brief The DeleteInputSecurityGroupResponsePrivate class provides private implementation for DeleteInputSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteInputSecurityGroupResponsePrivate object with public implementation \a q.
 */
DeleteInputSecurityGroupResponsePrivate::DeleteInputSecurityGroupResponsePrivate(
    DeleteInputSecurityGroupResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteInputSecurityGroup response element from \a xml.
 */
void DeleteInputSecurityGroupResponsePrivate::parseDeleteInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputSecurityGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
