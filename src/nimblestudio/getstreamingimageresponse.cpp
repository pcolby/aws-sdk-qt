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

#include "getstreamingimageresponse.h"
#include "getstreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::GetStreamingImageResponse
 * \brief The GetStreamingImageResponse class provides an interace for NimbleStudio GetStreamingImage responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::getStreamingImage
 */

/*!
 * Constructs a GetStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
GetStreamingImageResponse::GetStreamingImageResponse(
        const GetStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new GetStreamingImageResponsePrivate(this), parent)
{
    setRequest(new GetStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStreamingImageRequest * GetStreamingImageResponse::request() const
{
    return static_cast<const GetStreamingImageRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio GetStreamingImage \a response.
 */
void GetStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::GetStreamingImageResponsePrivate
 * \brief The GetStreamingImageResponsePrivate class provides private implementation for GetStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a GetStreamingImageResponsePrivate object with public implementation \a q.
 */
GetStreamingImageResponsePrivate::GetStreamingImageResponsePrivate(
    GetStreamingImageResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio GetStreamingImage response element from \a xml.
 */
void GetStreamingImageResponsePrivate::parseGetStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
