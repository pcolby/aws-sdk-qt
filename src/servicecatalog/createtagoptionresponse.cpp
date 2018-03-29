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

#include "createtagoptionresponse.h"
#include "createtagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  CreateTagOptionResponse
 *
 * @brief  Handles ServiceCatalog CreateTagOption responses.
 *
 * @see    ServiceCatalogClient::createTagOption
 */

/**
 * @brief  Constructs a new CreateTagOptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTagOptionResponse::CreateTagOptionResponse(
        const CreateTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new CreateTagOptionResponsePrivate(this), parent)
{
    setRequest(new CreateTagOptionRequest(request));
    setReply(reply);
}

const CreateTagOptionRequest * CreateTagOptionResponse::request() const
{
    Q_D(const CreateTagOptionResponse);
    return static_cast<const CreateTagOptionRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog CreateTagOption response.
 *
 * @param  response  Response to parse.
 */
void CreateTagOptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTagOptionResponsePrivate
 *
 * @brief  Private implementation for CreateTagOptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTagOptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTagOptionResponse instance.
 */
CreateTagOptionResponsePrivate::CreateTagOptionResponsePrivate(
    CreateTagOptionQueueResponse * const q) : CreateTagOptionPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog CreateTagOptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTagOptionResponsePrivate::CreateTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTagOptionResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
