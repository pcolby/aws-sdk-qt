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

#include "createpartitionresponse.h"
#include "createpartitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  CreatePartitionResponse
 *
 * @brief  Handles Glue CreatePartition responses.
 *
 * @see    GlueClient::createPartition
 */

/**
 * @brief  Constructs a new CreatePartitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePartitionResponse::CreatePartitionResponse(
        const CreatePartitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreatePartitionResponsePrivate(this), parent)
{
    setRequest(new CreatePartitionRequest(request));
    setReply(reply);
}

const CreatePartitionRequest * CreatePartitionResponse::request() const
{
    Q_D(const CreatePartitionResponse);
    return static_cast<const CreatePartitionRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreatePartition response.
 *
 * @param  response  Response to parse.
 */
void CreatePartitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePartitionResponsePrivate
 *
 * @brief  Private implementation for CreatePartitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePartitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePartitionResponse instance.
 */
CreatePartitionResponsePrivate::CreatePartitionResponsePrivate(
    CreatePartitionQueueResponse * const q) : CreatePartitionPrivate(q)
{

}

/**
 * @brief  Parse an Glue CreatePartitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePartitionResponsePrivate::CreatePartitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePartitionResponse"));
    /// @todo
}

} // namespace Glue
} // namespace AWS
