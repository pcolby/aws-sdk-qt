/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The StopStreamProcessorResponse class provides an interace for Rekognition StopStreamProcessor responses.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::stopStreamProcessor
 */

/*!
 * @brief  Constructs a new StopStreamProcessorResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const StopStreamProcessorRequest * StopStreamProcessorResponse::request() const
{
    Q_D(const StopStreamProcessorResponse);
    return static_cast<const StopStreamProcessorRequest *>(d->request);
}

/*!
 * @brief  Parse a Rekognition StopStreamProcessor response.
 *
 * @param  response  Response to parse.
 */
void StopStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopStreamProcessorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StopStreamProcessorResponsePrivate
 *
 * \brief Private implementation for StopStreamProcessorResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StopStreamProcessorResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopStreamProcessorResponse instance.
 */
StopStreamProcessorResponsePrivate::StopStreamProcessorResponsePrivate(
    StopStreamProcessorResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Rekognition StopStreamProcessorResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopStreamProcessorResponsePrivate::parseStopStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStreamProcessorResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
