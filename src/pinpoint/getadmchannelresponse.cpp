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

#include "getadmchannelresponse.h"
#include "getadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetAdmChannelResponse
 *
 * \brief The GetAdmChannelResponse class encapsulates Pinpoint GetAdmChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getAdmChannel
 */

/*!
 * @brief  Constructs a new GetAdmChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAdmChannelResponse::GetAdmChannelResponse(
        const GetAdmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAdmChannelResponsePrivate(this), parent)
{
    setRequest(new GetAdmChannelRequest(request));
    setReply(reply);
}

const GetAdmChannelRequest * GetAdmChannelResponse::request() const
{
    Q_D(const GetAdmChannelResponse);
    return static_cast<const GetAdmChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetAdmChannel response.
 *
 * @param  response  Response to parse.
 */
void GetAdmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAdmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetAdmChannelResponsePrivate
 *
 * \brief Private implementation for GetAdmChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetAdmChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAdmChannelResponse instance.
 */
GetAdmChannelResponsePrivate::GetAdmChannelResponsePrivate(
    GetAdmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetAdmChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAdmChannelResponsePrivate::parseGetAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAdmChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
