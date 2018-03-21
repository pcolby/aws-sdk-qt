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

#include "describehsmresponse.h"
#include "describehsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  DescribeHsmResponse
 *
 * @brief  Handles CloudHSM DescribeHsm responses.
 *
 * @see    CloudHSMClient::describeHsm
 */

/**
 * @brief  Constructs a new DescribeHsmResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHsmResponse::DescribeHsmResponse(
        const DescribeHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DescribeHsmResponsePrivate(this), parent)
{
    setRequest(new DescribeHsmRequest(request));
    setReply(reply);
}

const DescribeHsmRequest * DescribeHsmResponse::request() const
{
    Q_D(const DescribeHsmResponse);
    return static_cast<const DescribeHsmRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM DescribeHsm response.
 *
 * @param  response  Response to parse.
 */
void DescribeHsmResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHsmResponsePrivate
 *
 * @brief  Private implementation for DescribeHsmResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHsmResponse instance.
 */
DescribeHsmResponsePrivate::DescribeHsmResponsePrivate(
    DescribeHsmQueueResponse * const q) : DescribeHsmPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM DescribeHsmResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHsmResponsePrivate::DescribeHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHsmResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace AWS
