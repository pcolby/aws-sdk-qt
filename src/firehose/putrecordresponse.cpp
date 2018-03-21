/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putrecordresponse.h"
#include "putrecordresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Firehose {

/**
 * @class  PutRecordResponse
 *
 * @brief  Handles Firehose PutRecord responses.
 *
 * @see    FirehoseClient::putRecord
 */

/**
 * @brief  Constructs a new PutRecordResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRecordResponse::PutRecordResponse(
        const PutRecordRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FirehoseResponse(new PutRecordResponsePrivate(this), parent)
{
    setRequest(new PutRecordRequest(request));
    setReply(reply);
}

const PutRecordRequest * PutRecordResponse::request() const
{
    Q_D(const PutRecordResponse);
    return static_cast<const PutRecordRequest *>(d->request);
}

/**
 * @brief  Parse a Firehose PutRecord response.
 *
 * @param  response  Response to parse.
 */
void PutRecordResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutRecordResponsePrivate
 *
 * @brief  Private implementation for PutRecordResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRecordResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRecordResponse instance.
 */
PutRecordResponsePrivate::PutRecordResponsePrivate(
    PutRecordQueueResponse * const q) : PutRecordPrivate(q)
{

}

/**
 * @brief  Parse an Firehose PutRecordResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRecordResponsePrivate::PutRecordResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRecordResponse"));
    /// @todo
}

} // namespace Firehose
} // namespace AWS
