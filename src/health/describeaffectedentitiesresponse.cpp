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

#include "describeaffectedentitiesresponse.h"
#include "describeaffectedentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Health {

/**
 * @class  DescribeAffectedEntitiesResponse
 *
 * @brief  Handles Health DescribeAffectedEntities responses.
 *
 * @see    HealthClient::describeAffectedEntities
 */

/**
 * @brief  Constructs a new DescribeAffectedEntitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAffectedEntitiesResponse::DescribeAffectedEntitiesResponse(
        const DescribeAffectedEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthResponse(new DescribeAffectedEntitiesResponsePrivate(this), parent)
{
    setRequest(new DescribeAffectedEntitiesRequest(request));
    setReply(reply);
}

const DescribeAffectedEntitiesRequest * DescribeAffectedEntitiesResponse::request() const
{
    Q_D(const DescribeAffectedEntitiesResponse);
    return static_cast<const DescribeAffectedEntitiesRequest *>(d->request);
}

/**
 * @brief  Parse a Health DescribeAffectedEntities response.
 *
 * @param  response  Response to parse.
 */
void DescribeAffectedEntitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAffectedEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAffectedEntitiesResponsePrivate
 *
 * @brief  Private implementation for DescribeAffectedEntitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAffectedEntitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAffectedEntitiesResponse instance.
 */
DescribeAffectedEntitiesResponsePrivate::DescribeAffectedEntitiesResponsePrivate(
    DescribeAffectedEntitiesResponse * const q) : HealthResponsePrivate(q)
{

}

/**
 * @brief  Parse an Health DescribeAffectedEntitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAffectedEntitiesResponsePrivate::DescribeAffectedEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAffectedEntitiesResponse"));
    /// @todo
}

} // namespace Health
} // namespace QtAws
