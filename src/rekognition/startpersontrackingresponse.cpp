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

#include "startpersontrackingresponse.h"
#include "startpersontrackingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::StartPersonTrackingResponse
 *
 * \brief The StartPersonTrackingResponse class provides an interace for Rekognition StartPersonTracking responses.
 *
 * \ingroup Rekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::startPersonTracking
 */

/*!
 * @brief  Constructs a new StartPersonTrackingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartPersonTrackingResponse::StartPersonTrackingResponse(
        const StartPersonTrackingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new StartPersonTrackingResponsePrivate(this), parent)
{
    setRequest(new StartPersonTrackingRequest(request));
    setReply(reply);
}

const StartPersonTrackingRequest * StartPersonTrackingResponse::request() const
{
    Q_D(const StartPersonTrackingResponse);
    return static_cast<const StartPersonTrackingRequest *>(d->request);
}

/*!
 * @brief  Parse a Rekognition StartPersonTracking response.
 *
 * @param  response  Response to parse.
 */
void StartPersonTrackingResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartPersonTrackingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartPersonTrackingResponsePrivate
 *
 * \brief Private implementation for StartPersonTrackingResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartPersonTrackingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartPersonTrackingResponse instance.
 */
StartPersonTrackingResponsePrivate::StartPersonTrackingResponsePrivate(
    StartPersonTrackingResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Rekognition StartPersonTrackingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartPersonTrackingResponsePrivate::parseStartPersonTrackingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartPersonTrackingResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
