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

#include "importapikeysresponse.h"
#include "importapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  ImportApiKeysResponse
 *
 * @brief  Handles APIGateway ImportApiKeys responses.
 *
 * @see    APIGatewayClient::importApiKeys
 */

/**
 * @brief  Constructs a new ImportApiKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportApiKeysResponse::ImportApiKeysResponse(
        const ImportApiKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new ImportApiKeysResponsePrivate(this), parent)
{
    setRequest(new ImportApiKeysRequest(request));
    setReply(reply);
}

const ImportApiKeysRequest * ImportApiKeysResponse::request() const
{
    Q_D(const ImportApiKeysResponse);
    return static_cast<const ImportApiKeysRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway ImportApiKeys response.
 *
 * @param  response  Response to parse.
 */
void ImportApiKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportApiKeysResponsePrivate
 *
 * @brief  Private implementation for ImportApiKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportApiKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportApiKeysResponse instance.
 */
ImportApiKeysResponsePrivate::ImportApiKeysResponsePrivate(
    ImportApiKeysResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway ImportApiKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportApiKeysResponsePrivate::ImportApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportApiKeysResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
