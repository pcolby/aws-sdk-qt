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

#include "describesuggestersresponse.h"
#include "describesuggestersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudSearch {

/**
 * @class  DescribeSuggestersResponse
 *
 * @brief  Handles CloudSearch DescribeSuggesters responses.
 *
 * @see    CloudSearchClient::describeSuggesters
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSuggestersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeSuggestersResponsePrivate(this), parent)
{
    setRequest(new DescribeSuggestersRequest(request));
    setReply(reply);
}

const DescribeSuggestersRequest * DescribeSuggestersResponse::request() const
{
    Q_D(const DescribeSuggestersResponse);
    return static_cast<const DescribeSuggestersRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeSuggesters response.
 *
 * @param  response  Response to parse.
 */
void DescribeSuggestersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSuggestersResponsePrivate
 *
 * @brief  Private implementation for DescribeSuggestersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSuggestersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSuggestersResponse instance.
 */
DescribeSuggestersResponsePrivate::DescribeSuggestersResponsePrivate(
    DescribeSuggestersQueueResponse * const q) : DescribeSuggestersPrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeSuggestersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSuggestersResponsePrivate::DescribeSuggestersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSuggestersResponse"));
    /// @todo
}
