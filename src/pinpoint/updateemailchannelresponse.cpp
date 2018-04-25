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

#include "updateemailchannelresponse.h"
#include "updateemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelResponse
 * \brief The UpdateEmailChannelResponse class provides an interace for Pinpoint UpdateEmailChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateEmailChannel
 */

/*!
 * Constructs a UpdateEmailChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEmailChannelResponse::UpdateEmailChannelResponse(
        const UpdateEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEmailChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateEmailChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEmailChannelRequest * UpdateEmailChannelResponse::request() const
{
    Q_D(const UpdateEmailChannelResponse);
    return static_cast<const UpdateEmailChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateEmailChannel \a response.
 */
void UpdateEmailChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateEmailChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailChannelResponsePrivate
 * \brief The UpdateEmailChannelResponsePrivate class provides private implementation for UpdateEmailChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailChannelResponsePrivate object with public implementation \a q.
 */
UpdateEmailChannelResponsePrivate::UpdateEmailChannelResponsePrivate(
    UpdateEmailChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateEmailChannel response element from \a xml.
 */
void UpdateEmailChannelResponsePrivate::parseUpdateEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEmailChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
