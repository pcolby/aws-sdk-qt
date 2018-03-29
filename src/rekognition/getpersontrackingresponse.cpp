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

#include "getpersontrackingresponse.h"
#include "getpersontrackingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  GetPersonTrackingResponse
 *
 * @brief  Handles Rekognition GetPersonTracking responses.
 *
 * @see    RekognitionClient::getPersonTracking
 */

/**
 * @brief  Constructs a new GetPersonTrackingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPersonTrackingResponse::GetPersonTrackingResponse(
        const GetPersonTrackingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetPersonTrackingResponse(new GetPersonTrackingResponsePrivate(this), parent)
{
    setRequest(new GetPersonTrackingRequest(request));
    setReply(reply);
}

const GetPersonTrackingRequest * GetPersonTrackingResponse::request() const
{
    Q_D(const GetPersonTrackingResponse);
    return static_cast<const GetPersonTrackingRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition GetPersonTracking response.
 *
 * @param  response  Response to parse.
 */
void GetPersonTrackingResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPersonTrackingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPersonTrackingResponsePrivate
 *
 * @brief  Private implementation for GetPersonTrackingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPersonTrackingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPersonTrackingResponse instance.
 */
GetPersonTrackingResponsePrivate::GetPersonTrackingResponsePrivate(
    GetPersonTrackingResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition GetPersonTrackingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPersonTrackingResponsePrivate::parseGetPersonTrackingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPersonTrackingResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
