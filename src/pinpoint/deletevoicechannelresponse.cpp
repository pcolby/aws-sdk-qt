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

#include "deletevoicechannelresponse.h"
#include "deletevoicechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelResponse
 * \brief The DeleteVoiceChannelResponse class provides an interace for Pinpoint DeleteVoiceChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteVoiceChannel
 */

/*!
 * Constructs a DeleteVoiceChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVoiceChannelResponse::DeleteVoiceChannelResponse(
        const DeleteVoiceChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteVoiceChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteVoiceChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVoiceChannelRequest * DeleteVoiceChannelResponse::request() const
{
    Q_D(const DeleteVoiceChannelResponse);
    return static_cast<const DeleteVoiceChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteVoiceChannel \a response.
 */
void DeleteVoiceChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVoiceChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelResponsePrivate
 * \brief The DeleteVoiceChannelResponsePrivate class provides private implementation for DeleteVoiceChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceChannelResponsePrivate object with public implementation \a q.
 */
DeleteVoiceChannelResponsePrivate::DeleteVoiceChannelResponsePrivate(
    DeleteVoiceChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteVoiceChannel response element from \a xml.
 */
void DeleteVoiceChannelResponsePrivate::parseDeleteVoiceChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVoiceChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
