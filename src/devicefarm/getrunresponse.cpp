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

#include "getrunresponse.h"
#include "getrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRunResponse
 *
 * \brief The GetRunResponse class provides an interace for DeviceFarm GetRun responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getRun
 */

/*!
 * @brief  Constructs a new GetRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRunResponse::GetRunResponse(
        const GetRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetRunResponsePrivate(this), parent)
{
    setRequest(new GetRunRequest(request));
    setReply(reply);
}

const GetRunRequest * GetRunResponse::request() const
{
    Q_D(const GetRunResponse);
    return static_cast<const GetRunRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetRun response.
 *
 * @param  response  Response to parse.
 */
void GetRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetRunResponsePrivate
 *
 * \brief Private implementation for GetRunResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRunResponse instance.
 */
GetRunResponsePrivate::GetRunResponsePrivate(
    GetRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRunResponsePrivate::parseGetRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRunResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
