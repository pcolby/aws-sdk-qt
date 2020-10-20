/*
    Copyright 2013-2020 Paul Colby

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

#include "updatechannelclassresponse.h"
#include "updatechannelclassresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::UpdateChannelClassResponse
 * \brief The UpdateChannelClassResponse class provides an interace for MediaLive UpdateChannelClass responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::updateChannelClass
 */

/*!
 * Constructs a UpdateChannelClassResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelClassResponse::UpdateChannelClassResponse(
        const UpdateChannelClassRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new UpdateChannelClassResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelClassRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelClassRequest * UpdateChannelClassResponse::request() const
{
    Q_D(const UpdateChannelClassResponse);
    return static_cast<const UpdateChannelClassRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive UpdateChannelClass \a response.
 */
void UpdateChannelClassResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelClassResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::UpdateChannelClassResponsePrivate
 * \brief The UpdateChannelClassResponsePrivate class provides private implementation for UpdateChannelClassResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a UpdateChannelClassResponsePrivate object with public implementation \a q.
 */
UpdateChannelClassResponsePrivate::UpdateChannelClassResponsePrivate(
    UpdateChannelClassResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive UpdateChannelClass response element from \a xml.
 */
void UpdateChannelClassResponsePrivate::parseUpdateChannelClassResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelClassResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
