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

#include "createdomainnameresponse.h"
#include "createdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateDomainNameResponse
 *
 * @brief  Handles APIGateway CreateDomainName responses.
 *
 * @see    APIGatewayClient::createDomainName
 */

/**
 * @brief  Constructs a new CreateDomainNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDomainNameResponse::CreateDomainNameResponse(
        const CreateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateDomainNameResponsePrivate(this), parent)
{
    setRequest(new CreateDomainNameRequest(request));
    setReply(reply);
}

const CreateDomainNameRequest * CreateDomainNameResponse::request() const
{
    Q_D(const CreateDomainNameResponse);
    return static_cast<const CreateDomainNameRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateDomainName response.
 *
 * @param  response  Response to parse.
 */
void CreateDomainNameResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDomainNameResponsePrivate
 *
 * @brief  Private implementation for CreateDomainNameResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainNameResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDomainNameResponse instance.
 */
CreateDomainNameResponsePrivate::CreateDomainNameResponsePrivate(
    CreateDomainNameQueueResponse * const q) : CreateDomainNamePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateDomainNameResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDomainNameResponsePrivate::CreateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainNameResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
