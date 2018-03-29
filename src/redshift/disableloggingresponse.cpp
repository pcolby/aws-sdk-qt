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

#include "disableloggingresponse.h"
#include "disableloggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DisableLoggingResponse
 *
 * @brief  Handles Redshift DisableLogging responses.
 *
 * @see    RedshiftClient::disableLogging
 */

/**
 * @brief  Constructs a new DisableLoggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableLoggingResponse::DisableLoggingResponse(
        const DisableLoggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DisableLoggingResponsePrivate(this), parent)
{
    setRequest(new DisableLoggingRequest(request));
    setReply(reply);
}

const DisableLoggingRequest * DisableLoggingResponse::request() const
{
    Q_D(const DisableLoggingResponse);
    return static_cast<const DisableLoggingRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DisableLogging response.
 *
 * @param  response  Response to parse.
 */
void DisableLoggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableLoggingResponsePrivate
 *
 * @brief  Private implementation for DisableLoggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableLoggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableLoggingResponse instance.
 */
DisableLoggingResponsePrivate::DisableLoggingResponsePrivate(
    DisableLoggingResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DisableLoggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableLoggingResponsePrivate::DisableLoggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableLoggingResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
