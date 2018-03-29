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

#include "getjobresponse.h"
#include "getjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/**
 * @class  GetJobResponse
 *
 * @brief  Handles DeviceFarm GetJob responses.
 *
 * @see    DeviceFarmClient::getJob
 */

/**
 * @brief  Constructs a new GetJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetJobResponse::GetJobResponse(
        const GetJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetJobResponsePrivate(this), parent)
{
    setRequest(new GetJobRequest(request));
    setReply(reply);
}

const GetJobRequest * GetJobResponse::request() const
{
    Q_D(const GetJobResponse);
    return static_cast<const GetJobRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm GetJob response.
 *
 * @param  response  Response to parse.
 */
void GetJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetJobResponsePrivate
 *
 * @brief  Private implementation for GetJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetJobResponse instance.
 */
GetJobResponsePrivate::GetJobResponsePrivate(
    GetJobResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm GetJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetJobResponsePrivate::GetJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
