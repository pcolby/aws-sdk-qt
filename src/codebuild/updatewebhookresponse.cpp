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

#include "updatewebhookresponse.h"
#include "updatewebhookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeBuild {

/**
 * @class  UpdateWebhookResponse
 *
 * @brief  Handles CodeBuild UpdateWebhook responses.
 *
 * @see    CodeBuildClient::updateWebhook
 */

/**
 * @brief  Constructs a new UpdateWebhookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateWebhookResponse::UpdateWebhookResponse(
        const UpdateWebhookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeBuildResponse(new UpdateWebhookResponsePrivate(this), parent)
{
    setRequest(new UpdateWebhookRequest(request));
    setReply(reply);
}

const UpdateWebhookRequest * UpdateWebhookResponse::request() const
{
    Q_D(const UpdateWebhookResponse);
    return static_cast<const UpdateWebhookRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild UpdateWebhook response.
 *
 * @param  response  Response to parse.
 */
void UpdateWebhookResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateWebhookResponsePrivate
 *
 * @brief  Private implementation for UpdateWebhookResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateWebhookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateWebhookResponse instance.
 */
UpdateWebhookResponsePrivate::UpdateWebhookResponsePrivate(
    UpdateWebhookQueueResponse * const q) : UpdateWebhookPrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild UpdateWebhookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateWebhookResponsePrivate::UpdateWebhookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWebhookResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace AWS
