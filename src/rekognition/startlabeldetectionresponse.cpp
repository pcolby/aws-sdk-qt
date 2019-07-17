/*
    Copyright 2013-2019 Paul Colby

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

#include "startlabeldetectionresponse.h"
#include "startlabeldetectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartLabelDetectionResponse
 * \brief The StartLabelDetectionResponse class provides an interace for Rekognition StartLabelDetection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startLabelDetection
 */

/*!
 * Constructs a StartLabelDetectionResponse object for \a reply to \a request, with parent \a parent.
 */
StartLabelDetectionResponse::StartLabelDetectionResponse(
        const StartLabelDetectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartLabelDetectionResponsePrivate(this), parent)
{
    setRequest(new StartLabelDetectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartLabelDetectionRequest * StartLabelDetectionResponse::request() const
{
    Q_D(const StartLabelDetectionResponse);
    return static_cast<const StartLabelDetectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition StartLabelDetection \a response.
 */
void StartLabelDetectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartLabelDetectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartLabelDetectionResponsePrivate
 * \brief The StartLabelDetectionResponsePrivate class provides private implementation for StartLabelDetectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartLabelDetectionResponsePrivate object with public implementation \a q.
 */
StartLabelDetectionResponsePrivate::StartLabelDetectionResponsePrivate(
    StartLabelDetectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartLabelDetection response element from \a xml.
 */
void StartLabelDetectionResponsePrivate::parseStartLabelDetectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartLabelDetectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
