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

#include "getrecordsresponse.h"
#include "getrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  GetRecordsResponse
 *
 * @brief  Handles Kinesis GetRecords responses.
 *
 * @see    KinesisClient::getRecords
 */

/**
 * @brief  Constructs a new GetRecordsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRecordsResponse::GetRecordsResponse(
        const GetRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new GetRecordsResponsePrivate(this), parent)
{
    setRequest(new GetRecordsRequest(request));
    setReply(reply);
}

const GetRecordsRequest * GetRecordsResponse::request() const
{
    Q_D(const GetRecordsResponse);
    return static_cast<const GetRecordsRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis GetRecords response.
 *
 * @param  response  Response to parse.
 */
void GetRecordsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRecordsResponsePrivate
 *
 * @brief  Private implementation for GetRecordsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRecordsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRecordsResponse instance.
 */
GetRecordsResponsePrivate::GetRecordsResponsePrivate(
    GetRecordsResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis GetRecordsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRecordsResponsePrivate::parseGetRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRecordsResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
