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

#include "downloaddblogfileportionresponse.h"
#include "downloaddblogfileportionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  DownloadDBLogFilePortionResponse
 *
 * @brief  Handles RDS DownloadDBLogFilePortion responses.
 *
 * @see    RDSClient::downloadDBLogFilePortion
 */

/**
 * @brief  Constructs a new DownloadDBLogFilePortionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DownloadDBLogFilePortionResponse::DownloadDBLogFilePortionResponse(
        const DownloadDBLogFilePortionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DownloadDBLogFilePortionResponsePrivate(this), parent)
{
    setRequest(new DownloadDBLogFilePortionRequest(request));
    setReply(reply);
}

const DownloadDBLogFilePortionRequest * DownloadDBLogFilePortionResponse::request() const
{
    Q_D(const DownloadDBLogFilePortionResponse);
    return static_cast<const DownloadDBLogFilePortionRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DownloadDBLogFilePortion response.
 *
 * @param  response  Response to parse.
 */
void DownloadDBLogFilePortionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DownloadDBLogFilePortionResponsePrivate
 *
 * @brief  Private implementation for DownloadDBLogFilePortionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DownloadDBLogFilePortionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DownloadDBLogFilePortionResponse instance.
 */
DownloadDBLogFilePortionResponsePrivate::DownloadDBLogFilePortionResponsePrivate(
    DownloadDBLogFilePortionQueueResponse * const q) : DownloadDBLogFilePortionPrivate(q)
{

}

/**
 * @brief  Parse an RDS DownloadDBLogFilePortionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DownloadDBLogFilePortionResponsePrivate::DownloadDBLogFilePortionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DownloadDBLogFilePortionResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
