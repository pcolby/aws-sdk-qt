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

#include "deleteapnssandboxchannelresponse.h"
#include "deleteapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelResponse
 * \brief The DeleteApnsSandboxChannelResponse class provides an interace for Pinpoint DeleteApnsSandboxChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsSandboxChannel
 */

/*!
 * Constructs a DeleteApnsSandboxChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteApnsSandboxChannelResponse::DeleteApnsSandboxChannelResponse(
        const DeleteApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsSandboxChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteApnsSandboxChannelRequest * DeleteApnsSandboxChannelResponse::request() const
{
    Q_D(const DeleteApnsSandboxChannelResponse);
    return static_cast<const DeleteApnsSandboxChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteApnsSandboxChannel \a response.
 */
void DeleteApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelResponsePrivate
 * \brief The DeleteApnsSandboxChannelResponsePrivate class provides private implementation for DeleteApnsSandboxChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsSandboxChannelResponsePrivate object with public implementation \a q.
 */
DeleteApnsSandboxChannelResponsePrivate::DeleteApnsSandboxChannelResponsePrivate(
    DeleteApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteApnsSandboxChannel response element from \a xml.
 */
void DeleteApnsSandboxChannelResponsePrivate::parseDeleteApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
