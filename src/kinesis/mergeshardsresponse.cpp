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

#include "mergeshardsresponse.h"
#include "mergeshardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  MergeShardsResponse
 *
 * @brief  Handles Kinesis MergeShards responses.
 *
 * @see    KinesisClient::mergeShards
 */

/**
 * @brief  Constructs a new MergeShardsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MergeShardsResponse::MergeShardsResponse(
        const MergeShardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new MergeShardsResponsePrivate(this), parent)
{
    setRequest(new MergeShardsRequest(request));
    setReply(reply);
}

const MergeShardsRequest * MergeShardsResponse::request() const
{
    Q_D(const MergeShardsResponse);
    return static_cast<const MergeShardsRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis MergeShards response.
 *
 * @param  response  Response to parse.
 */
void MergeShardsResponse::parseSuccess(QIODevice &response)
{
    Q_D(MergeShardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  MergeShardsResponsePrivate
 *
 * @brief  Private implementation for MergeShardsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MergeShardsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MergeShardsResponse instance.
 */
MergeShardsResponsePrivate::MergeShardsResponsePrivate(
    MergeShardsResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis MergeShardsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void MergeShardsResponsePrivate::parseMergeShardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MergeShardsResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
