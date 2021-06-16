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

#include "startfacedetectionresponse.h"
#include "startfacedetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartFaceDetectionResponse
 * \brief The StartFaceDetectionResponse class provides an interace for Rekognition StartFaceDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startFaceDetection
 */

/*!
 * Constructs a StartFaceDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
StartFaceDetectionResponse::StartFaceDetectionResponse(
        const StartFaceDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartFaceDetectionResponsePrivate(this), parent)
{
    setRequest(new StartFaceDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFaceDetectionRequest * StartFaceDetectionResponse::request() const
{
    Q_D(const StartFaceDetectionResponse);
    return static_cast<const StartFaceDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition StartFaceDetection \a response.
 */
void StartFaceDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFaceDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartFaceDetectionResponsePrivate
 * \brief The StartFaceDetectionResponsePrivate class provides private implementation for StartFaceDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartFaceDetectionResponsePrivate object with public implementation \a q.
 */
StartFaceDetectionResponsePrivate::StartFaceDetectionResponsePrivate(
    StartFaceDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartFaceDetection response element from \a xml.
 */
void StartFaceDetectionResponsePrivate::parseStartFaceDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFaceDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
