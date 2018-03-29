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

#include "describeelasticipsresponse.h"
#include "describeelasticipsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeElasticIpsResponse
 *
 * @brief  Handles OpsWorks DescribeElasticIps responses.
 *
 * @see    OpsWorksClient::describeElasticIps
 */

/**
 * @brief  Constructs a new DescribeElasticIpsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeElasticIpsResponse::DescribeElasticIpsResponse(
        const DescribeElasticIpsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeElasticIpsResponsePrivate(this), parent)
{
    setRequest(new DescribeElasticIpsRequest(request));
    setReply(reply);
}

const DescribeElasticIpsRequest * DescribeElasticIpsResponse::request() const
{
    Q_D(const DescribeElasticIpsResponse);
    return static_cast<const DescribeElasticIpsRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeElasticIps response.
 *
 * @param  response  Response to parse.
 */
void DescribeElasticIpsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeElasticIpsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeElasticIpsResponsePrivate
 *
 * @brief  Private implementation for DescribeElasticIpsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeElasticIpsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeElasticIpsResponse instance.
 */
DescribeElasticIpsResponsePrivate::DescribeElasticIpsResponsePrivate(
    DescribeElasticIpsResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeElasticIpsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeElasticIpsResponsePrivate::DescribeElasticIpsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeElasticIpsResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
