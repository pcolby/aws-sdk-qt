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

#include "updatestreamingimageresponse.h"
#include "updatestreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::UpdateStreamingImageResponse
 * \brief The UpdateStreamingImageResponse class provides an interace for NimbleStudio UpdateStreamingImage responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::updateStreamingImage
 */

/*!
 * Constructs a UpdateStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStreamingImageResponse::UpdateStreamingImageResponse(
        const UpdateStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new UpdateStreamingImageResponsePrivate(this), parent)
{
    setRequest(new UpdateStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStreamingImageRequest * UpdateStreamingImageResponse::request() const
{
    Q_D(const UpdateStreamingImageResponse);
    return static_cast<const UpdateStreamingImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio UpdateStreamingImage \a response.
 */
void UpdateStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::UpdateStreamingImageResponsePrivate
 * \brief The UpdateStreamingImageResponsePrivate class provides private implementation for UpdateStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a UpdateStreamingImageResponsePrivate object with public implementation \a q.
 */
UpdateStreamingImageResponsePrivate::UpdateStreamingImageResponsePrivate(
    UpdateStreamingImageResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio UpdateStreamingImage response element from \a xml.
 */
void UpdateStreamingImageResponsePrivate::parseUpdateStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
