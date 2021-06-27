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

#include "getfacedetectionresponse.h"
#include "getfacedetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetFaceDetectionResponse
 * \brief The GetFaceDetectionResponse class provides an interace for Rekognition GetFaceDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getFaceDetection
 */

/*!
 * Constructs a GetFaceDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFaceDetectionResponse::GetFaceDetectionResponse(
        const GetFaceDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetFaceDetectionResponsePrivate(this), parent)
{
    setRequest(new GetFaceDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFaceDetectionRequest * GetFaceDetectionResponse::request() const
{
    return static_cast<const GetFaceDetectionRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition GetFaceDetection \a response.
 */
void GetFaceDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFaceDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetFaceDetectionResponsePrivate
 * \brief The GetFaceDetectionResponsePrivate class provides private implementation for GetFaceDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetFaceDetectionResponsePrivate object with public implementation \a q.
 */
GetFaceDetectionResponsePrivate::GetFaceDetectionResponsePrivate(
    GetFaceDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetFaceDetection response element from \a xml.
 */
void GetFaceDetectionResponsePrivate::parseGetFaceDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFaceDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
