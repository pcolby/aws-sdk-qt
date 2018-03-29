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

#include "describehapgresponse.h"
#include "describehapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/**
 * @class  DescribeHapgResponse
 *
 * @brief  Handles CloudHSM DescribeHapg responses.
 *
 * @see    CloudHSMClient::describeHapg
 */

/**
 * @brief  Constructs a new DescribeHapgResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHapgResponse::DescribeHapgResponse(
        const DescribeHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DescribeHapgResponsePrivate(this), parent)
{
    setRequest(new DescribeHapgRequest(request));
    setReply(reply);
}

const DescribeHapgRequest * DescribeHapgResponse::request() const
{
    Q_D(const DescribeHapgResponse);
    return static_cast<const DescribeHapgRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM DescribeHapg response.
 *
 * @param  response  Response to parse.
 */
void DescribeHapgResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHapgResponsePrivate
 *
 * @brief  Private implementation for DescribeHapgResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHapgResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHapgResponse instance.
 */
DescribeHapgResponsePrivate::DescribeHapgResponsePrivate(
    DescribeHapgResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM DescribeHapgResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHapgResponsePrivate::parseDescribeHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHapgResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
