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

#include "describeconstraintresponse.h"
#include "describeconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeConstraintResponse
 *
 * @brief  Handles ServiceCatalog DescribeConstraint responses.
 *
 * @see    ServiceCatalogClient::describeConstraint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConstraintResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeConstraintResponsePrivate(this), parent)
{
    setRequest(new DescribeConstraintRequest(request));
    setReply(reply);
}

const DescribeConstraintRequest * DescribeConstraintResponse::request() const
{
    Q_D(const DescribeConstraintResponse);
    return static_cast<const DescribeConstraintRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DescribeConstraint response.
 *
 * @param  response  Response to parse.
 */
void DescribeConstraintResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConstraintResponsePrivate
 *
 * @brief  Private implementation for DescribeConstraintResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConstraintResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConstraintResponse instance.
 */
DescribeConstraintResponsePrivate::DescribeConstraintResponsePrivate(
    DescribeConstraintQueueResponse * const q) : DescribeConstraintPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DescribeConstraintResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConstraintResponsePrivate::DescribeConstraintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConstraintResponse"));
    /// @todo
}
