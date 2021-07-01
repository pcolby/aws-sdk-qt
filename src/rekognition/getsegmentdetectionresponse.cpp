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

#include "getsegmentdetectionresponse.h"
#include "getsegmentdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::GetSegmentDetectionResponse
 * \brief The GetSegmentDetectionResponse class provides an interace for Rekognition GetSegmentDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::getSegmentDetection
 */

/*!
 * Constructs a GetSegmentDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentDetectionResponse::GetSegmentDetectionResponse(
        const GetSegmentDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new GetSegmentDetectionResponsePrivate(this), parent)
{
    setRequest(new GetSegmentDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentDetectionRequest * GetSegmentDetectionResponse::request() const
{
    Q_D(const GetSegmentDetectionResponse);
    return static_cast<const GetSegmentDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition GetSegmentDetection \a response.
 */
void GetSegmentDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::GetSegmentDetectionResponsePrivate
 * \brief The GetSegmentDetectionResponsePrivate class provides private implementation for GetSegmentDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a GetSegmentDetectionResponsePrivate object with public implementation \a q.
 */
GetSegmentDetectionResponsePrivate::GetSegmentDetectionResponsePrivate(
    GetSegmentDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition GetSegmentDetection response element from \a xml.
 */
void GetSegmentDetectionResponsePrivate::parseGetSegmentDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
