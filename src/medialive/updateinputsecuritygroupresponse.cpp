/*
    Copyright 2013-2019 Paul Colby

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

#include "updateinputsecuritygroupresponse.h"
#include "updateinputsecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateInputSecurityGroupResponse
 * \brief The UpdateInputSecurityGroupResponse class provides an interace for MediaLive UpdateInputSecurityGroup responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateInputSecurityGroup
 */

/*!
 * Constructs a UpdateInputSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInputSecurityGroupResponse::UpdateInputSecurityGroupResponse(
        const UpdateInputSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateInputSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateInputSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInputSecurityGroupRequest * UpdateInputSecurityGroupResponse::request() const
{
    Q_D(const UpdateInputSecurityGroupResponse);
    return static_cast<const UpdateInputSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateInputSecurityGroup \a response.
 */
void UpdateInputSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInputSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateInputSecurityGroupResponsePrivate
 * \brief The UpdateInputSecurityGroupResponsePrivate class provides private implementation for UpdateInputSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateInputSecurityGroupResponsePrivate object with public implementation \a q.
 */
UpdateInputSecurityGroupResponsePrivate::UpdateInputSecurityGroupResponsePrivate(
    UpdateInputSecurityGroupResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateInputSecurityGroup response element from \a xml.
 */
void UpdateInputSecurityGroupResponsePrivate::parseUpdateInputSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInputSecurityGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
