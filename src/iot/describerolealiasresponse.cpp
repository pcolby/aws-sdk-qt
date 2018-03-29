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

#include "describerolealiasresponse.h"
#include "describerolealiasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT {

/**
 * @class  DescribeRoleAliasResponse
 *
 * @brief  Handles IoT DescribeRoleAlias responses.
 *
 * @see    IoTClient::describeRoleAlias
 */

/**
 * @brief  Constructs a new DescribeRoleAliasResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRoleAliasResponse::DescribeRoleAliasResponse(
        const DescribeRoleAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeRoleAliasResponse(new DescribeRoleAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeRoleAliasRequest(request));
    setReply(reply);
}

const DescribeRoleAliasRequest * DescribeRoleAliasResponse::request() const
{
    Q_D(const DescribeRoleAliasResponse);
    return static_cast<const DescribeRoleAliasRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeRoleAlias response.
 *
 * @param  response  Response to parse.
 */
void DescribeRoleAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRoleAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRoleAliasResponsePrivate
 *
 * @brief  Private implementation for DescribeRoleAliasResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRoleAliasResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRoleAliasResponse instance.
 */
DescribeRoleAliasResponsePrivate::DescribeRoleAliasResponsePrivate(
    DescribeRoleAliasResponse * const q) : IoTResponsePrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeRoleAliasResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRoleAliasResponsePrivate::parseDescribeRoleAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRoleAliasResponse"));
    /// @todo
}

} // namespace IoT
} // namespace QtAws
