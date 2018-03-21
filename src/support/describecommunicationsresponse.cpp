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

#include "describecommunicationsresponse.h"
#include "describecommunicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  DescribeCommunicationsResponse
 *
 * @brief  Handles Support DescribeCommunications responses.
 *
 * @see    SupportClient::describeCommunications
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCommunicationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeCommunicationsResponsePrivate(this), parent)
{
    setRequest(new DescribeCommunicationsRequest(request));
    setReply(reply);
}

const DescribeCommunicationsRequest * DescribeCommunicationsResponse::request() const
{
    Q_D(const DescribeCommunicationsResponse);
    return static_cast<const DescribeCommunicationsRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeCommunications response.
 *
 * @param  response  Response to parse.
 */
void DescribeCommunicationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCommunicationsResponsePrivate
 *
 * @brief  Private implementation for DescribeCommunicationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCommunicationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCommunicationsResponse instance.
 */
DescribeCommunicationsResponsePrivate::DescribeCommunicationsResponsePrivate(
    DescribeCommunicationsQueueResponse * const q) : DescribeCommunicationsPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeCommunicationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCommunicationsResponsePrivate::DescribeCommunicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCommunicationsResponse"));
    /// @todo
}
