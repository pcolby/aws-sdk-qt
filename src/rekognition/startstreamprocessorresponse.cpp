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

#include "startstreamprocessorresponse.h"
#include "startstreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartStreamProcessorResponse
 * \brief The StartStreamProcessorResponse class provides an interace for Rekognition StartStreamProcessor responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startStreamProcessor
 */

/*!
 * Constructs a StartStreamProcessorResponse object for \a reply to \a request, with parent \a parent.
 */
StartStreamProcessorResponse::StartStreamProcessorResponse(
        const StartStreamProcessorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new StartStreamProcessorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStreamProcessorRequest * StartStreamProcessorResponse::request() const
{
    Q_D(const StartStreamProcessorResponse);
    return static_cast<const StartStreamProcessorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition StartStreamProcessor \a response.
 */
void StartStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStreamProcessorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::StartStreamProcessorResponsePrivate
 * \brief The StartStreamProcessorResponsePrivate class provides private implementation for StartStreamProcessorResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a StartStreamProcessorResponsePrivate object with public implementation \a q.
 */
StartStreamProcessorResponsePrivate::StartStreamProcessorResponsePrivate(
    StartStreamProcessorResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition StartStreamProcessor response element from \a xml.
 */
void StartStreamProcessorResponsePrivate::parseStartStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStreamProcessorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
