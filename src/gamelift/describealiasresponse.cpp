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

#include "describealiasresponse.h"
#include "describealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  DescribeAliasResponse
 *
 * @brief  Handles GameLift DescribeAlias responses.
 *
 * @see    GameLiftClient::describeAlias
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAliasResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeAliasRequest(request));
    setReply(reply);
}

const DescribeAliasRequest * DescribeAliasResponse::request() const
{
    Q_D(const DescribeAliasResponse);
    return static_cast<const DescribeAliasRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeAlias response.
 *
 * @param  response  Response to parse.
 */
void DescribeAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAliasResponsePrivate
 *
 * @brief  Private implementation for DescribeAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAliasResponse instance.
 */
DescribeAliasResponsePrivate::DescribeAliasResponsePrivate(
    DescribeAliasQueueResponse * const q) : DescribeAliasPrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAliasResponsePrivate::DescribeAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAliasResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
