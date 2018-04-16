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

#include "describeconfigurationresponse.h"
#include "describeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeConfigurationResponse
 *
 * \brief The DescribeConfigurationResponse class encapsulates MQ DescribeConfiguration responses.
 *
 * \ingroup MQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::describeConfiguration
 */

/*!
 * @brief  Constructs a new DescribeConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationResponse::DescribeConfigurationResponse(
        const DescribeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new DescribeConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRequest(request));
    setReply(reply);
}

const DescribeConfigurationRequest * DescribeConfigurationResponse::request() const
{
    Q_D(const DescribeConfigurationResponse);
    return static_cast<const DescribeConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a MQ DescribeConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeConfigurationResponsePrivate
 *
 * \brief Private implementation for DescribeConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationResponse instance.
 */
DescribeConfigurationResponsePrivate::DescribeConfigurationResponsePrivate(
    DescribeConfigurationResponse * const q) : MQResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MQ DescribeConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationResponsePrivate::parseDescribeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
