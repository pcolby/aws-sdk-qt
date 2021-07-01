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

#include "deleteemailchannelresponse.h"
#include "deleteemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelResponse
 * \brief The DeleteEmailChannelResponse class provides an interace for Pinpoint DeleteEmailChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailChannel
 */

/*!
 * Constructs a DeleteEmailChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEmailChannelResponse::DeleteEmailChannelResponse(
        const DeleteEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteEmailChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEmailChannelRequest * DeleteEmailChannelResponse::request() const
{
    Q_D(const DeleteEmailChannelResponse);
    return static_cast<const DeleteEmailChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteEmailChannel \a response.
 */
void DeleteEmailChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEmailChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelResponsePrivate
 * \brief The DeleteEmailChannelResponsePrivate class provides private implementation for DeleteEmailChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailChannelResponsePrivate object with public implementation \a q.
 */
DeleteEmailChannelResponsePrivate::DeleteEmailChannelResponsePrivate(
    DeleteEmailChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteEmailChannel response element from \a xml.
 */
void DeleteEmailChannelResponsePrivate::parseDeleteEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
