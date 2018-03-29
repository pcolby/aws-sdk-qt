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

#include "describeconditionalforwardersresponse.h"
#include "describeconditionalforwardersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeConditionalForwardersResponse
 *
 * @brief  Handles DirectoryService DescribeConditionalForwarders responses.
 *
 * @see    DirectoryServiceClient::describeConditionalForwarders
 */

/**
 * @brief  Constructs a new DescribeConditionalForwardersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConditionalForwardersResponse::DescribeConditionalForwardersResponse(
        const DescribeConditionalForwardersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeConditionalForwardersResponsePrivate(this), parent)
{
    setRequest(new DescribeConditionalForwardersRequest(request));
    setReply(reply);
}

const DescribeConditionalForwardersRequest * DescribeConditionalForwardersResponse::request() const
{
    Q_D(const DescribeConditionalForwardersResponse);
    return static_cast<const DescribeConditionalForwardersRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DescribeConditionalForwarders response.
 *
 * @param  response  Response to parse.
 */
void DescribeConditionalForwardersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConditionalForwardersResponsePrivate
 *
 * @brief  Private implementation for DescribeConditionalForwardersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConditionalForwardersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConditionalForwardersResponse instance.
 */
DescribeConditionalForwardersResponsePrivate::DescribeConditionalForwardersResponsePrivate(
    DescribeConditionalForwardersResponse * const q) : DirectoryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DescribeConditionalForwardersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConditionalForwardersResponsePrivate::DescribeConditionalForwardersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConditionalForwardersResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
