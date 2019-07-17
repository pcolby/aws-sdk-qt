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

#include "stopstreamprocessorresponse.h"
#include "stopstreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StopStreamProcessorResponse
 * \brief The StopStreamProcessorResponse class provides an interace for Rekognition StopStreamProcessor responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::stopStreamProcessor
 */

/*!
 * Constructs a StopStreamProcessorResponse object for \a reply to \a request, with parent \a parent.
 */
StopStreamProcessorResponse::StopStreamProcessorResponse(
        const StopStreamProcessorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StopStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new StopStreamProcessorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopStreamProcessorRequest * StopStreamProcessorResponse::request() const
{
    Q_D(const StopStreamProcessorResponse);
    return static_cast<const StopStreamProcessorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition StopStreamProcessor \a response.
 */
void StopStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopStreamProcessorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StopStreamProcessorResponsePrivate
 * \brief The StopStreamProcessorResponsePrivate class provides private implementation for StopStreamProcessorResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StopStreamProcessorResponsePrivate object with public implementation \a q.
 */
StopStreamProcessorResponsePrivate::StopStreamProcessorResponsePrivate(
    StopStreamProcessorResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StopStreamProcessor response element from \a xml.
 */
void StopStreamProcessorResponsePrivate::parseStopStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStreamProcessorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
