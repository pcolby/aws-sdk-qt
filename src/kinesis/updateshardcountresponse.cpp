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

#include "updateshardcountresponse.h"
#include "updateshardcountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/**
 * @class  UpdateShardCountResponse
 *
 * @brief  Handles Kinesis UpdateShardCount responses.
 *
 * @see    KinesisClient::updateShardCount
 */

/**
 * @brief  Constructs a new UpdateShardCountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateShardCountResponse::UpdateShardCountResponse(
        const UpdateShardCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new UpdateShardCountResponsePrivate(this), parent)
{
    setRequest(new UpdateShardCountRequest(request));
    setReply(reply);
}

const UpdateShardCountRequest * UpdateShardCountResponse::request() const
{
    Q_D(const UpdateShardCountResponse);
    return static_cast<const UpdateShardCountRequest *>(d->request);
}

/**
 * @brief  Parse a Kinesis UpdateShardCount response.
 *
 * @param  response  Response to parse.
 */
void UpdateShardCountResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateShardCountResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateShardCountResponsePrivate
 *
 * @brief  Private implementation for UpdateShardCountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateShardCountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateShardCountResponse instance.
 */
UpdateShardCountResponsePrivate::UpdateShardCountResponsePrivate(
    UpdateShardCountResponse * const q) : KinesisResponsePrivate(q)
{

}

/**
 * @brief  Parse an Kinesis UpdateShardCountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateShardCountResponsePrivate::parseUpdateShardCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateShardCountResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
