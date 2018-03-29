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

#include "describeconfigurationsetresponse.h"
#include "describeconfigurationsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  DescribeConfigurationSetResponse
 *
 * @brief  Handles SES DescribeConfigurationSet responses.
 *
 * @see    SESClient::describeConfigurationSet
 */

/**
 * @brief  Constructs a new DescribeConfigurationSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationSetResponse::DescribeConfigurationSetResponse(
        const DescribeConfigurationSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DescribeConfigurationSetResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationSetRequest(request));
    setReply(reply);
}

const DescribeConfigurationSetRequest * DescribeConfigurationSetResponse::request() const
{
    Q_D(const DescribeConfigurationSetResponse);
    return static_cast<const DescribeConfigurationSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES DescribeConfigurationSet response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationSetResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationSetResponse instance.
 */
DescribeConfigurationSetResponsePrivate::DescribeConfigurationSetResponsePrivate(
    DescribeConfigurationSetQueueResponse * const q) : DescribeConfigurationSetPrivate(q)
{

}

/**
 * @brief  Parse an SES DescribeConfigurationSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationSetResponsePrivate::DescribeConfigurationSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
