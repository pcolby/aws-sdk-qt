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

#include "getapnssandboxchannelresponse.h"
#include "getapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelResponse
 *
 * \brief The GetApnsSandboxChannelResponse class encapsulates Pinpoint GetApnsSandboxChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getApnsSandboxChannel
 */

/*!
 * @brief  Constructs a new GetApnsSandboxChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApnsSandboxChannelResponse::GetApnsSandboxChannelResponse(
        const GetApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsSandboxChannelRequest(request));
    setReply(reply);
}

const GetApnsSandboxChannelRequest * GetApnsSandboxChannelResponse::request() const
{
    Q_D(const GetApnsSandboxChannelResponse);
    return static_cast<const GetApnsSandboxChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetApnsSandboxChannel response.
 *
 * @param  response  Response to parse.
 */
void GetApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetApnsSandboxChannelResponsePrivate
 *
 * \brief Private implementation for GetApnsSandboxChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetApnsSandboxChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApnsSandboxChannelResponse instance.
 */
GetApnsSandboxChannelResponsePrivate::GetApnsSandboxChannelResponsePrivate(
    GetApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetApnsSandboxChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApnsSandboxChannelResponsePrivate::parseGetApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
