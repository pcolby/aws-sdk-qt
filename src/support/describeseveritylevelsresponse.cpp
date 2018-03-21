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

#include "describeseveritylevelsresponse.h"
#include "describeseveritylevelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Support {

/**
 * @class  DescribeSeverityLevelsResponse
 *
 * @brief  Handles Support DescribeSeverityLevels responses.
 *
 * @see    SupportClient::describeSeverityLevels
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSeverityLevelsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SupportResponse(new DescribeSeverityLevelsResponsePrivate(this), parent)
{
    setRequest(new DescribeSeverityLevelsRequest(request));
    setReply(reply);
}

const DescribeSeverityLevelsRequest * DescribeSeverityLevelsResponse::request() const
{
    Q_D(const DescribeSeverityLevelsResponse);
    return static_cast<const DescribeSeverityLevelsRequest *>(d->request);
}

/**
 * @brief  Parse a Support DescribeSeverityLevels response.
 *
 * @param  response  Response to parse.
 */
void DescribeSeverityLevelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSeverityLevelsResponsePrivate
 *
 * @brief  Private implementation for DescribeSeverityLevelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSeverityLevelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSeverityLevelsResponse instance.
 */
DescribeSeverityLevelsResponsePrivate::DescribeSeverityLevelsResponsePrivate(
    DescribeSeverityLevelsQueueResponse * const q) : DescribeSeverityLevelsPrivate(q)
{

}

/**
 * @brief  Parse an Support DescribeSeverityLevelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSeverityLevelsResponsePrivate::DescribeSeverityLevelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSeverityLevelsResponse"));
    /// @todo
}
