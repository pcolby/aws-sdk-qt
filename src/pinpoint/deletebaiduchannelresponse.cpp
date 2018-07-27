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

#include "deletebaiduchannelresponse.h"
#include "deletebaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelResponse
 * \brief The DeleteBaiduChannelResponse class provides an interace for Pinpoint DeleteBaiduChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteBaiduChannel
 */

/*!
 * Constructs a DeleteBaiduChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBaiduChannelResponse::DeleteBaiduChannelResponse(
        const DeleteBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteBaiduChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBaiduChannelRequest * DeleteBaiduChannelResponse::request() const
{
    Q_D(const DeleteBaiduChannelResponse);
    return static_cast<const DeleteBaiduChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteBaiduChannel \a response.
 */
void DeleteBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelResponsePrivate
 * \brief The DeleteBaiduChannelResponsePrivate class provides private implementation for DeleteBaiduChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteBaiduChannelResponsePrivate object with public implementation \a q.
 */
DeleteBaiduChannelResponsePrivate::DeleteBaiduChannelResponsePrivate(
    DeleteBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteBaiduChannel response element from \a xml.
 */
void DeleteBaiduChannelResponsePrivate::parseDeleteBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBaiduChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
