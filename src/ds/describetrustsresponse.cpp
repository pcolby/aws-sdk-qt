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

#include "describetrustsresponse.h"
#include "describetrustsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  DescribeTrustsResponse
 *
 * @brief  Handles DirectoryService DescribeTrusts responses.
 *
 * @see    DirectoryServiceClient::describeTrusts
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrustsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeTrustsResponsePrivate(this), parent)
{
    setRequest(new DescribeTrustsRequest(request));
    setReply(reply);
}

const DescribeTrustsRequest * DescribeTrustsResponse::request() const
{
    Q_D(const DescribeTrustsResponse);
    return static_cast<const DescribeTrustsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DescribeTrusts response.
 *
 * @param  response  Response to parse.
 */
void DescribeTrustsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTrustsResponsePrivate
 *
 * @brief  Private implementation for DescribeTrustsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrustsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTrustsResponse instance.
 */
DescribeTrustsResponsePrivate::DescribeTrustsResponsePrivate(
    DescribeTrustsQueueResponse * const q) : DescribeTrustsPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DescribeTrustsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTrustsResponsePrivate::DescribeTrustsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrustsResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
