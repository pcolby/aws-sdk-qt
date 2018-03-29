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

#include "enableloggingresponse.h"
#include "enableloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  EnableLoggingResponse
 *
 * @brief  Handles Redshift EnableLogging responses.
 *
 * @see    RedshiftClient::enableLogging
 */

/**
 * @brief  Constructs a new EnableLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableLoggingResponse::EnableLoggingResponse(
        const EnableLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new EnableLoggingResponsePrivate(this), parent)
{
    setRequest(new EnableLoggingRequest(request));
    setReply(reply);
}

const EnableLoggingRequest * EnableLoggingResponse::request() const
{
    Q_D(const EnableLoggingResponse);
    return static_cast<const EnableLoggingRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift EnableLogging response.
 *
 * @param  response  Response to parse.
 */
void EnableLoggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableLoggingResponsePrivate
 *
 * @brief  Private implementation for EnableLoggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableLoggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableLoggingResponse instance.
 */
EnableLoggingResponsePrivate::EnableLoggingResponsePrivate(
    EnableLoggingQueueResponse * const q) : EnableLoggingPrivate(q)
{

}

/**
 * @brief  Parse an Redshift EnableLoggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableLoggingResponsePrivate::EnableLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableLoggingResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
