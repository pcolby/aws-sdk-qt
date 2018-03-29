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

#include "composeenvironmentsresponse.h"
#include "composeenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  ComposeEnvironmentsResponse
 *
 * @brief  Handles ElasticBeanstalk ComposeEnvironments responses.
 *
 * @see    ElasticBeanstalkClient::composeEnvironments
 */

/**
 * @brief  Constructs a new ComposeEnvironmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ComposeEnvironmentsResponse::ComposeEnvironmentsResponse(
        const ComposeEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new ComposeEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new ComposeEnvironmentsRequest(request));
    setReply(reply);
}

const ComposeEnvironmentsRequest * ComposeEnvironmentsResponse::request() const
{
    Q_D(const ComposeEnvironmentsResponse);
    return static_cast<const ComposeEnvironmentsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk ComposeEnvironments response.
 *
 * @param  response  Response to parse.
 */
void ComposeEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ComposeEnvironmentsResponsePrivate
 *
 * @brief  Private implementation for ComposeEnvironmentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ComposeEnvironmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ComposeEnvironmentsResponse instance.
 */
ComposeEnvironmentsResponsePrivate::ComposeEnvironmentsResponsePrivate(
    ComposeEnvironmentsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk ComposeEnvironmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ComposeEnvironmentsResponsePrivate::ComposeEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ComposeEnvironmentsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
