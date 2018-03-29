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

#include "deregisterjobdefinitionresponse.h"
#include "deregisterjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/**
 * @class  DeregisterJobDefinitionResponse
 *
 * @brief  Handles Batch DeregisterJobDefinition responses.
 *
 * @see    BatchClient::deregisterJobDefinition
 */

/**
 * @brief  Constructs a new DeregisterJobDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterJobDefinitionResponse::DeregisterJobDefinitionResponse(
        const DeregisterJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeregisterJobDefinitionResponse(new DeregisterJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeregisterJobDefinitionRequest(request));
    setReply(reply);
}

const DeregisterJobDefinitionRequest * DeregisterJobDefinitionResponse::request() const
{
    Q_D(const DeregisterJobDefinitionResponse);
    return static_cast<const DeregisterJobDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Batch DeregisterJobDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeregisterJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterJobDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeregisterJobDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterJobDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterJobDefinitionResponse instance.
 */
DeregisterJobDefinitionResponsePrivate::DeregisterJobDefinitionResponsePrivate(
    DeregisterJobDefinitionResponse * const q) : BatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an Batch DeregisterJobDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterJobDefinitionResponsePrivate::parseDeregisterJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterJobDefinitionResponse"));
    /// @todo
}

} // namespace Batch
} // namespace QtAws
