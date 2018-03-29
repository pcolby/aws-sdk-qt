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

#include "createrestapiresponse.h"
#include "createrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateRestApiResponse
 *
 * @brief  Handles APIGateway CreateRestApi responses.
 *
 * @see    APIGatewayClient::createRestApi
 */

/**
 * @brief  Constructs a new CreateRestApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRestApiResponse::CreateRestApiResponse(
        const CreateRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateRestApiResponsePrivate(this), parent)
{
    setRequest(new CreateRestApiRequest(request));
    setReply(reply);
}

const CreateRestApiRequest * CreateRestApiResponse::request() const
{
    Q_D(const CreateRestApiResponse);
    return static_cast<const CreateRestApiRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateRestApi response.
 *
 * @param  response  Response to parse.
 */
void CreateRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateRestApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRestApiResponsePrivate
 *
 * @brief  Private implementation for CreateRestApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRestApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRestApiResponse instance.
 */
CreateRestApiResponsePrivate::CreateRestApiResponsePrivate(
    CreateRestApiResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateRestApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRestApiResponsePrivate::CreateRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
