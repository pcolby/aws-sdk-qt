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

#include "updatejobqueueresponse.h"
#include "updatejobqueueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/**
 * @class  UpdateJobQueueResponse
 *
 * @brief  Handles Batch UpdateJobQueue responses.
 *
 * @see    BatchClient::updateJobQueue
 */

/**
 * @brief  Constructs a new UpdateJobQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateJobQueueResponse::UpdateJobQueueResponse(
        const UpdateJobQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new UpdateJobQueueResponsePrivate(this), parent)
{
    setRequest(new UpdateJobQueueRequest(request));
    setReply(reply);
}

const UpdateJobQueueRequest * UpdateJobQueueResponse::request() const
{
    Q_D(const UpdateJobQueueResponse);
    return static_cast<const UpdateJobQueueRequest *>(d->request);
}

/**
 * @brief  Parse a Batch UpdateJobQueue response.
 *
 * @param  response  Response to parse.
 */
void UpdateJobQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateJobQueueResponsePrivate
 *
 * @brief  Private implementation for UpdateJobQueueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateJobQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateJobQueueResponse instance.
 */
UpdateJobQueueResponsePrivate::UpdateJobQueueResponsePrivate(
    UpdateJobQueueQueueResponse * const q) : UpdateJobQueuePrivate(q)
{

}

/**
 * @brief  Parse an Batch UpdateJobQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateJobQueueResponsePrivate::UpdateJobQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobQueueResponse"));
    /// @todo
}

} // namespace Batch
} // namespace QtAws
