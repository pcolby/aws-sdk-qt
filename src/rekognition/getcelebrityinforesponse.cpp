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

#include "getcelebrityinforesponse.h"
#include "getcelebrityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/**
 * @class  GetCelebrityInfoResponse
 *
 * @brief  Handles Rekognition GetCelebrityInfo responses.
 *
 * @see    RekognitionClient::getCelebrityInfo
 */

/**
 * @brief  Constructs a new GetCelebrityInfoResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCelebrityInfoResponse::GetCelebrityInfoResponse(
        const GetCelebrityInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetCelebrityInfoResponse(new GetCelebrityInfoResponsePrivate(this), parent)
{
    setRequest(new GetCelebrityInfoRequest(request));
    setReply(reply);
}

const GetCelebrityInfoRequest * GetCelebrityInfoResponse::request() const
{
    Q_D(const GetCelebrityInfoResponse);
    return static_cast<const GetCelebrityInfoRequest *>(d->request);
}

/**
 * @brief  Parse a Rekognition GetCelebrityInfo response.
 *
 * @param  response  Response to parse.
 */
void GetCelebrityInfoResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCelebrityInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCelebrityInfoResponsePrivate
 *
 * @brief  Private implementation for GetCelebrityInfoResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCelebrityInfoResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCelebrityInfoResponse instance.
 */
GetCelebrityInfoResponsePrivate::GetCelebrityInfoResponsePrivate(
    GetCelebrityInfoResponse * const q) : RekognitionResponsePrivate(q)
{

}

/**
 * @brief  Parse an Rekognition GetCelebrityInfoResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCelebrityInfoResponsePrivate::parseGetCelebrityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCelebrityInfoResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
