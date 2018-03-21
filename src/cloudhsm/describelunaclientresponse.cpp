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

#include "describelunaclientresponse.h"
#include "describelunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudHSM {

/**
 * @class  DescribeLunaClientResponse
 *
 * @brief  Handles CloudHSM DescribeLunaClient responses.
 *
 * @see    CloudHSMClient::describeLunaClient
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLunaClientResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new DescribeLunaClientResponsePrivate(this), parent)
{
    setRequest(new DescribeLunaClientRequest(request));
    setReply(reply);
}

const DescribeLunaClientRequest * DescribeLunaClientResponse::request() const
{
    Q_D(const DescribeLunaClientResponse);
    return static_cast<const DescribeLunaClientRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSM DescribeLunaClient response.
 *
 * @param  response  Response to parse.
 */
void DescribeLunaClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLunaClientResponsePrivate
 *
 * @brief  Private implementation for DescribeLunaClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLunaClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLunaClientResponse instance.
 */
DescribeLunaClientResponsePrivate::DescribeLunaClientResponsePrivate(
    DescribeLunaClientQueueResponse * const q) : DescribeLunaClientPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSM DescribeLunaClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLunaClientResponsePrivate::DescribeLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLunaClientResponse"));
    /// @todo
}
