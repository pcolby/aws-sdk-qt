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

#include "batchgetresourceconfigresponse.h"
#include "batchgetresourceconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  BatchGetResourceConfigResponse
 *
 * @brief  Handles ConfigService BatchGetResourceConfig responses.
 *
 * @see    ConfigServiceClient::batchGetResourceConfig
 */

/**
 * @brief  Constructs a new BatchGetResourceConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetResourceConfigResponse::BatchGetResourceConfigResponse(
        const BatchGetResourceConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchGetResourceConfigResponse(new BatchGetResourceConfigResponsePrivate(this), parent)
{
    setRequest(new BatchGetResourceConfigRequest(request));
    setReply(reply);
}

const BatchGetResourceConfigRequest * BatchGetResourceConfigResponse::request() const
{
    Q_D(const BatchGetResourceConfigResponse);
    return static_cast<const BatchGetResourceConfigRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService BatchGetResourceConfig response.
 *
 * @param  response  Response to parse.
 */
void BatchGetResourceConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchGetResourceConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetResourceConfigResponsePrivate
 *
 * @brief  Private implementation for BatchGetResourceConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetResourceConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetResourceConfigResponse instance.
 */
BatchGetResourceConfigResponsePrivate::BatchGetResourceConfigResponsePrivate(
    BatchGetResourceConfigResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService BatchGetResourceConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetResourceConfigResponsePrivate::parseBatchGetResourceConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetResourceConfigResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
