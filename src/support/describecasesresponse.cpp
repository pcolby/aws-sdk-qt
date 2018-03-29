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

#include "describecasesresponse.h"
#include "describecasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  DescribeCasesResponse
 *
 * @brief  Handles Support DescribeCases responses.
 *
 * @see    SupportClient::describeCases
 */

/**
 * @brief  Constructs a new DescribeCasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCasesResponse::DescribeCasesResponse(
        const DescribeCasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeCasesResponsePrivate(this), parent)
{
    setRequest(new DescribeCasesRequest(request));
    setReply(reply);
}

const DescribeCasesRequest * DescribeCasesResponse::request() const
{
    Q_D(const DescribeCasesResponse);
    return static_cast<const DescribeCasesRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeCases response.
 *
 * @param  response  Response to parse.
 */
void DescribeCasesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCasesResponsePrivate
 *
 * @brief  Private implementation for DescribeCasesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCasesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCasesResponse instance.
 */
DescribeCasesResponsePrivate::DescribeCasesResponsePrivate(
    DescribeCasesQueueResponse * const q) : DescribeCasesPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeCasesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCasesResponsePrivate::DescribeCasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCasesResponse"));
    /// @todo
}

} // namespace Support
} // namespace AWS
