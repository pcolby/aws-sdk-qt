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

#include "getdataendpointresponse.h"
#include "getdataendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::GetDataEndpointResponse
 * \brief The GetDataEndpointResponse class provides an interace for KinesisVideo GetDataEndpoint responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::getDataEndpoint
 */

/*!
 * Constructs a GetDataEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataEndpointResponse::GetDataEndpointResponse(
        const GetDataEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new GetDataEndpointResponsePrivate(this), parent)
{
    setRequest(new GetDataEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataEndpointRequest * GetDataEndpointResponse::request() const
{
    Q_D(const GetDataEndpointResponse);
    return static_cast<const GetDataEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo GetDataEndpoint \a response.
 */
void GetDataEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::GetDataEndpointResponsePrivate
 * \brief The GetDataEndpointResponsePrivate class provides private implementation for GetDataEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a GetDataEndpointResponsePrivate object with public implementation \a q.
 */
GetDataEndpointResponsePrivate::GetDataEndpointResponsePrivate(
    GetDataEndpointResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo GetDataEndpoint response element from \a xml.
 */
void GetDataEndpointResponsePrivate::parseGetDataEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
