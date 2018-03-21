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

#include "updatesamlproviderresponse.h"
#include "updatesamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  UpdateSAMLProviderResponse
 *
 * @brief  Handles IAM UpdateSAMLProvider responses.
 *
 * @see    IAMClient::updateSAMLProvider
 */

/**
 * @brief  Constructs a new UpdateSAMLProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSAMLProviderResponse::UpdateSAMLProviderResponse(
        const UpdateSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new UpdateSAMLProviderRequest(request));
    setReply(reply);
}

const UpdateSAMLProviderRequest * UpdateSAMLProviderResponse::request() const
{
    Q_D(const UpdateSAMLProviderResponse);
    return static_cast<const UpdateSAMLProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateSAMLProvider response.
 *
 * @param  response  Response to parse.
 */
void UpdateSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSAMLProviderResponsePrivate
 *
 * @brief  Private implementation for UpdateSAMLProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSAMLProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSAMLProviderResponse instance.
 */
UpdateSAMLProviderResponsePrivate::UpdateSAMLProviderResponsePrivate(
    UpdateSAMLProviderQueueResponse * const q) : UpdateSAMLProviderPrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateSAMLProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSAMLProviderResponsePrivate::UpdateSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSAMLProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
