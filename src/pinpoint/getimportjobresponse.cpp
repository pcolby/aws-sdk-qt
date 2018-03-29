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

#include "getimportjobresponse.h"
#include "getimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/**
 * @class  GetImportJobResponse
 *
 * @brief  Handles Pinpoint GetImportJob responses.
 *
 * @see    PinpointClient::getImportJob
 */

/**
 * @brief  Constructs a new GetImportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetImportJobResponse::GetImportJobResponse(
        const GetImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetImportJobResponsePrivate(this), parent)
{
    setRequest(new GetImportJobRequest(request));
    setReply(reply);
}

const GetImportJobRequest * GetImportJobResponse::request() const
{
    Q_D(const GetImportJobResponse);
    return static_cast<const GetImportJobRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetImportJob response.
 *
 * @param  response  Response to parse.
 */
void GetImportJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetImportJobResponsePrivate
 *
 * @brief  Private implementation for GetImportJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetImportJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetImportJobResponse instance.
 */
GetImportJobResponsePrivate::GetImportJobResponsePrivate(
    GetImportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetImportJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetImportJobResponsePrivate::GetImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportJobResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
