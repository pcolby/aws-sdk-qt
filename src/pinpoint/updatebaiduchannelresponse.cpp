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

#include "updatebaiduchannelresponse.h"
#include "updatebaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelResponse
 * \brief The UpdateBaiduChannelResponse class provides an interace for Pinpoint UpdateBaiduChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateBaiduChannel
 */

/*!
 * Constructs a UpdateBaiduChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBaiduChannelResponse::UpdateBaiduChannelResponse(
        const UpdateBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateBaiduChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBaiduChannelRequest * UpdateBaiduChannelResponse::request() const
{
    Q_D(const UpdateBaiduChannelResponse);
    return static_cast<const UpdateBaiduChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateBaiduChannel \a response.
 */
void UpdateBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelResponsePrivate
 * \brief The UpdateBaiduChannelResponsePrivate class provides private implementation for UpdateBaiduChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateBaiduChannelResponsePrivate object with public implementation \a q.
 */
UpdateBaiduChannelResponsePrivate::UpdateBaiduChannelResponsePrivate(
    UpdateBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateBaiduChannel response element from \a xml.
 */
void UpdateBaiduChannelResponsePrivate::parseUpdateBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBaiduChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
