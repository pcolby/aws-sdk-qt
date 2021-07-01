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

#include "deletestreamingimageresponse.h"
#include "deletestreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingImageResponse
 * \brief The DeleteStreamingImageResponse class provides an interace for NimbleStudio DeleteStreamingImage responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::deleteStreamingImage
 */

/*!
 * Constructs a DeleteStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamingImageResponse::DeleteStreamingImageResponse(
        const DeleteStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new DeleteStreamingImageResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamingImageRequest * DeleteStreamingImageResponse::request() const
{
    Q_D(const DeleteStreamingImageResponse);
    return static_cast<const DeleteStreamingImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio DeleteStreamingImage \a response.
 */
void DeleteStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::DeleteStreamingImageResponsePrivate
 * \brief The DeleteStreamingImageResponsePrivate class provides private implementation for DeleteStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a DeleteStreamingImageResponsePrivate object with public implementation \a q.
 */
DeleteStreamingImageResponsePrivate::DeleteStreamingImageResponsePrivate(
    DeleteStreamingImageResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio DeleteStreamingImage response element from \a xml.
 */
void DeleteStreamingImageResponsePrivate::parseDeleteStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
