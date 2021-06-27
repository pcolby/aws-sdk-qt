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

#include "starttextdetectionresponse.h"
#include "starttextdetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartTextDetectionResponse
 * \brief The StartTextDetectionResponse class provides an interace for Rekognition StartTextDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startTextDetection
 */

/*!
 * Constructs a StartTextDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
StartTextDetectionResponse::StartTextDetectionResponse(
        const StartTextDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartTextDetectionResponsePrivate(this), parent)
{
    setRequest(new StartTextDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTextDetectionRequest * StartTextDetectionResponse::request() const
{
    return static_cast<const StartTextDetectionRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition StartTextDetection \a response.
 */
void StartTextDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTextDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartTextDetectionResponsePrivate
 * \brief The StartTextDetectionResponsePrivate class provides private implementation for StartTextDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartTextDetectionResponsePrivate object with public implementation \a q.
 */
StartTextDetectionResponsePrivate::StartTextDetectionResponsePrivate(
    StartTextDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartTextDetection response element from \a xml.
 */
void StartTextDetectionResponsePrivate::parseStartTextDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTextDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
