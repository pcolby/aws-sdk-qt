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

#include "getprojectresponse.h"
#include "getprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetProjectResponse
 *
 * \brief The GetProjectResponse class encapsulates DeviceFarm GetProject responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getProject
 */

/*!
 * @brief  Constructs a new GetProjectResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetProjectResponse::GetProjectResponse(
        const GetProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetProjectResponsePrivate(this), parent)
{
    setRequest(new GetProjectRequest(request));
    setReply(reply);
}

const GetProjectRequest * GetProjectResponse::request() const
{
    Q_D(const GetProjectResponse);
    return static_cast<const GetProjectRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetProject response.
 *
 * @param  response  Response to parse.
 */
void GetProjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetProjectResponsePrivate
 *
 * \brief Private implementation for GetProjectResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetProjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetProjectResponse instance.
 */
GetProjectResponsePrivate::GetProjectResponsePrivate(
    GetProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetProjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetProjectResponsePrivate::parseGetProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProjectResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
