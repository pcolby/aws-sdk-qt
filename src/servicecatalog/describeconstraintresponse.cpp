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

#include "describeconstraintresponse.h"
#include "describeconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DescribeConstraintResponse
 *
 * @brief  Handles ServiceCatalog DescribeConstraint responses.
 *
 * @see    ServiceCatalogClient::describeConstraint
 */

/**
 * @brief  Constructs a new DescribeConstraintResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConstraintResponse::DescribeConstraintResponse(
        const DescribeConstraintRequest &request,
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
    DescribeConstraintResponse * const q) : ServiceCatalogResponsePrivate(q)
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

} // namespace ServiceCatalog
} // namespace QtAws
