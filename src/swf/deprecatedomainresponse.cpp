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

#include "deprecatedomainresponse.h"
#include "deprecatedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  DeprecateDomainResponse
 *
 * @brief  Handles SWF DeprecateDomain responses.
 *
 * @see    SWFClient::deprecateDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeprecateDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DeprecateDomainResponsePrivate(this), parent)
{
    setRequest(new DeprecateDomainRequest(request));
    setReply(reply);
}

const DeprecateDomainRequest * DeprecateDomainResponse::request() const
{
    Q_D(const DeprecateDomainResponse);
    return static_cast<const DeprecateDomainRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DeprecateDomain response.
 *
 * @param  response  Response to parse.
 */
void DeprecateDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeprecateDomainResponsePrivate
 *
 * @brief  Private implementation for DeprecateDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeprecateDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeprecateDomainResponse instance.
 */
DeprecateDomainResponsePrivate::DeprecateDomainResponsePrivate(
    DeprecateDomainQueueResponse * const q) : DeprecateDomainPrivate(q)
{

}

/**
 * @brief  Parse an SWF DeprecateDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeprecateDomainResponsePrivate::DeprecateDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateDomainResponse"));
    /// @todo
}

} // namespace SWF
} // namespace AWS
