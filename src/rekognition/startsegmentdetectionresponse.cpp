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

#include "startsegmentdetectionresponse.h"
#include "startsegmentdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartSegmentDetectionResponse
 * \brief The StartSegmentDetectionResponse class provides an interace for Rekognition StartSegmentDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startSegmentDetection
 */

/*!
 * Constructs a StartSegmentDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
StartSegmentDetectionResponse::StartSegmentDetectionResponse(
        const StartSegmentDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartSegmentDetectionResponsePrivate(this), parent)
{
    setRequest(new StartSegmentDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSegmentDetectionRequest * StartSegmentDetectionResponse::request() const
{
    return static_cast<const StartSegmentDetectionRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition StartSegmentDetection \a response.
 */
void StartSegmentDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSegmentDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartSegmentDetectionResponsePrivate
 * \brief The StartSegmentDetectionResponsePrivate class provides private implementation for StartSegmentDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartSegmentDetectionResponsePrivate object with public implementation \a q.
 */
StartSegmentDetectionResponsePrivate::StartSegmentDetectionResponsePrivate(
    StartSegmentDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartSegmentDetection response element from \a xml.
 */
void StartSegmentDetectionResponsePrivate::parseStartSegmentDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSegmentDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
