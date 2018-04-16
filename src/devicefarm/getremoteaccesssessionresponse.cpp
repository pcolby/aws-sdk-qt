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

#include "getremoteaccesssessionresponse.h"
#include "getremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRemoteAccessSessionResponse
 *
 * \brief The GetRemoteAccessSessionResponse class encapsulates DeviceFarm GetRemoteAccessSession responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getRemoteAccessSession
 */

/*!
 * @brief  Constructs a new GetRemoteAccessSessionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRemoteAccessSessionResponse::GetRemoteAccessSessionResponse(
        const GetRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new GetRemoteAccessSessionRequest(request));
    setReply(reply);
}

const GetRemoteAccessSessionRequest * GetRemoteAccessSessionResponse::request() const
{
    Q_D(const GetRemoteAccessSessionResponse);
    return static_cast<const GetRemoteAccessSessionRequest *>(d->request);
}

/*!
 * @brief  Parse a DeviceFarm GetRemoteAccessSession response.
 *
 * @param  response  Response to parse.
 */
void GetRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetRemoteAccessSessionResponsePrivate
 *
 * \brief Private implementation for GetRemoteAccessSessionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRemoteAccessSessionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRemoteAccessSessionResponse instance.
 */
GetRemoteAccessSessionResponsePrivate::GetRemoteAccessSessionResponsePrivate(
    GetRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm GetRemoteAccessSessionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRemoteAccessSessionResponsePrivate::parseGetRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRemoteAccessSessionResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
