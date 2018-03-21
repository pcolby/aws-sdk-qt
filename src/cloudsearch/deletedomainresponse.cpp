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

#include "deletedomainresponse.h"
#include "deletedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DeleteDomainResponse
 *
 * @brief  Handles CloudSearch DeleteDomain responses.
 *
 * @see    CloudSearchClient::deleteDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DeleteDomainResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainRequest(request));
    setReply(reply);
}

const DeleteDomainRequest * DeleteDomainResponse::request() const
{
    Q_D(const DeleteDomainResponse);
    return static_cast<const DeleteDomainRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DeleteDomain response.
 *
 * @param  response  Response to parse.
 */
void DeleteDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDomainResponsePrivate
 *
 * @brief  Private implementation for DeleteDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDomainResponse instance.
 */
DeleteDomainResponsePrivate::DeleteDomainResponsePrivate(
    DeleteDomainQueueResponse * const q) : DeleteDomainPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DeleteDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDomainResponsePrivate::DeleteDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace AWS
