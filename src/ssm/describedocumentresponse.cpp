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

#include "describedocumentresponse.h"
#include "describedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeDocumentResponse
 *
 * @brief  Handles SSM DescribeDocument responses.
 *
 * @see    SSMClient::describeDocument
 */

/**
 * @brief  Constructs a new DescribeDocumentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDocumentResponse::DescribeDocumentResponse(
        const DescribeDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeDocumentResponsePrivate(this), parent)
{
    setRequest(new DescribeDocumentRequest(request));
    setReply(reply);
}

const DescribeDocumentRequest * DescribeDocumentResponse::request() const
{
    Q_D(const DescribeDocumentResponse);
    return static_cast<const DescribeDocumentRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeDocument response.
 *
 * @param  response  Response to parse.
 */
void DescribeDocumentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDocumentResponsePrivate
 *
 * @brief  Private implementation for DescribeDocumentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDocumentResponse instance.
 */
DescribeDocumentResponsePrivate::DescribeDocumentResponsePrivate(
    DescribeDocumentQueueResponse * const q) : DescribeDocumentPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeDocumentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDocumentResponsePrivate::DescribeDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDocumentResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
