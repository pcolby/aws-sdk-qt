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

#include "createdomainresponse.h"
#include "createdomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SimpleDB {

/**
 * @class  CreateDomainResponse
 *
 * @brief  Handles SimpleDB CreateDomain responses.
 *
 * @see    SimpleDBClient::createDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new CreateDomainResponsePrivate(this), parent)
{
    setRequest(new CreateDomainRequest(request));
    setReply(reply);
}

const CreateDomainRequest * CreateDomainResponse::request() const
{
    Q_D(const CreateDomainResponse);
    return static_cast<const CreateDomainRequest *>(d->request);
}

/**
 * @brief  Parse a SimpleDB CreateDomain response.
 *
 * @param  response  Response to parse.
 */
void CreateDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDomainResponsePrivate
 *
 * @brief  Private implementation for CreateDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDomainResponse instance.
 */
CreateDomainResponsePrivate::CreateDomainResponsePrivate(
    CreateDomainQueueResponse * const q) : CreateDomainPrivate(q)
{

}

/**
 * @brief  Parse an SimpleDB CreateDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDomainResponsePrivate::CreateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainResponse"));
    /// @todo
}

} // namespace SimpleDB
} // namespace AWS
