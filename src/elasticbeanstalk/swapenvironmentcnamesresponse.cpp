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

#include "swapenvironmentcnamesresponse.h"
#include "swapenvironmentcnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  SwapEnvironmentCNAMEsResponse
 *
 * @brief  Handles ElasticBeanstalk SwapEnvironmentCNAMEs responses.
 *
 * @see    ElasticBeanstalkClient::swapEnvironmentCNAMEs
 */

/**
 * @brief  Constructs a new SwapEnvironmentCNAMEsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SwapEnvironmentCNAMEsResponse::SwapEnvironmentCNAMEsResponse(
        const SwapEnvironmentCNAMEsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new SwapEnvironmentCNAMEsResponsePrivate(this), parent)
{
    setRequest(new SwapEnvironmentCNAMEsRequest(request));
    setReply(reply);
}

const SwapEnvironmentCNAMEsRequest * SwapEnvironmentCNAMEsResponse::request() const
{
    Q_D(const SwapEnvironmentCNAMEsResponse);
    return static_cast<const SwapEnvironmentCNAMEsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk SwapEnvironmentCNAMEs response.
 *
 * @param  response  Response to parse.
 */
void SwapEnvironmentCNAMEsResponse::parseSuccess(QIODevice &response)
{
    Q_D(SwapEnvironmentCNAMEsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SwapEnvironmentCNAMEsResponsePrivate
 *
 * @brief  Private implementation for SwapEnvironmentCNAMEsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SwapEnvironmentCNAMEsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SwapEnvironmentCNAMEsResponse instance.
 */
SwapEnvironmentCNAMEsResponsePrivate::SwapEnvironmentCNAMEsResponsePrivate(
    SwapEnvironmentCNAMEsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk SwapEnvironmentCNAMEsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SwapEnvironmentCNAMEsResponsePrivate::parseSwapEnvironmentCNAMEsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SwapEnvironmentCNAMEsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
