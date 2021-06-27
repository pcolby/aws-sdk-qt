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

#include "createstreamingimageresponse.h"
#include "createstreamingimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::CreateStreamingImageResponse
 * \brief The CreateStreamingImageResponse class provides an interace for NimbleStudio CreateStreamingImage responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::createStreamingImage
 */

/*!
 * Constructs a CreateStreamingImageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamingImageResponse::CreateStreamingImageResponse(
        const CreateStreamingImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new CreateStreamingImageResponsePrivate(this), parent)
{
    setRequest(new CreateStreamingImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamingImageRequest * CreateStreamingImageResponse::request() const
{
    return static_cast<const CreateStreamingImageRequest *>(NimbleStudioResponse::request());
}

/*!
 * \reimp
 * Parses a successful NimbleStudio CreateStreamingImage \a response.
 */
void CreateStreamingImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamingImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::CreateStreamingImageResponsePrivate
 * \brief The CreateStreamingImageResponsePrivate class provides private implementation for CreateStreamingImageResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a CreateStreamingImageResponsePrivate object with public implementation \a q.
 */
CreateStreamingImageResponsePrivate::CreateStreamingImageResponsePrivate(
    CreateStreamingImageResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio CreateStreamingImage response element from \a xml.
 */
void CreateStreamingImageResponsePrivate::parseCreateStreamingImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamingImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
