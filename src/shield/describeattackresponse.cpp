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

#include "describeattackresponse.h"
#include "describeattackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Shield {

/**
 * @class  DescribeAttackResponse
 *
 * @brief  Handles Shield DescribeAttack responses.
 *
 * @see    ShieldClient::describeAttack
 */

/**
 * @brief  Constructs a new DescribeAttackResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAttackResponse::DescribeAttackResponse(
        const DescribeAttackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeAttackResponsePrivate(this), parent)
{
    setRequest(new DescribeAttackRequest(request));
    setReply(reply);
}

const DescribeAttackRequest * DescribeAttackResponse::request() const
{
    Q_D(const DescribeAttackResponse);
    return static_cast<const DescribeAttackRequest *>(d->request);
}

/**
 * @brief  Parse a Shield DescribeAttack response.
 *
 * @param  response  Response to parse.
 */
void DescribeAttackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAttackResponsePrivate
 *
 * @brief  Private implementation for DescribeAttackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAttackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAttackResponse instance.
 */
DescribeAttackResponsePrivate::DescribeAttackResponsePrivate(
    DescribeAttackQueueResponse * const q) : DescribeAttackPrivate(q)
{

}

/**
 * @brief  Parse an Shield DescribeAttackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAttackResponsePrivate::DescribeAttackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAttackResponse"));
    /// @todo
}

} // namespace Shield
} // namespace AWS
