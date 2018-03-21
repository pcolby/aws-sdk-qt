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

#include "createworkerblockresponse.h"
#include "createworkerblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MTurk {

/**
 * @class  CreateWorkerBlockResponse
 *
 * @brief  Handles MTurk CreateWorkerBlock responses.
 *
 * @see    MTurkClient::createWorkerBlock
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateWorkerBlockResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new CreateWorkerBlockResponsePrivate(this), parent)
{
    setRequest(new CreateWorkerBlockRequest(request));
    setReply(reply);
}

const CreateWorkerBlockRequest * CreateWorkerBlockResponse::request() const
{
    Q_D(const CreateWorkerBlockResponse);
    return static_cast<const CreateWorkerBlockRequest *>(d->request);
}

/**
 * @brief  Parse a MTurk CreateWorkerBlock response.
 *
 * @param  response  Response to parse.
 */
void CreateWorkerBlockResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateWorkerBlockResponsePrivate
 *
 * @brief  Private implementation for CreateWorkerBlockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateWorkerBlockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateWorkerBlockResponse instance.
 */
CreateWorkerBlockResponsePrivate::CreateWorkerBlockResponsePrivate(
    CreateWorkerBlockQueueResponse * const q) : CreateWorkerBlockPrivate(q)
{

}

/**
 * @brief  Parse an MTurk CreateWorkerBlockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateWorkerBlockResponsePrivate::CreateWorkerBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkerBlockResponse"));
    /// @todo
}

} // namespace MTurk
} // namespace AWS
