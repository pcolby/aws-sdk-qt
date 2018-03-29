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

#include "getexportjobresponse.h"
#include "getexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetExportJobResponse
 *
 * @brief  Handles Pinpoint GetExportJob responses.
 *
 * @see    PinpointClient::getExportJob
 */

/**
 * @brief  Constructs a new GetExportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetExportJobResponse::GetExportJobResponse(
        const GetExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetExportJobResponsePrivate(this), parent)
{
    setRequest(new GetExportJobRequest(request));
    setReply(reply);
}

const GetExportJobRequest * GetExportJobResponse::request() const
{
    Q_D(const GetExportJobResponse);
    return static_cast<const GetExportJobRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetExportJob response.
 *
 * @param  response  Response to parse.
 */
void GetExportJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetExportJobResponsePrivate
 *
 * @brief  Private implementation for GetExportJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetExportJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetExportJobResponse instance.
 */
GetExportJobResponsePrivate::GetExportJobResponsePrivate(
    GetExportJobQueueResponse * const q) : GetExportJobPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetExportJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetExportJobResponsePrivate::GetExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportJobResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
