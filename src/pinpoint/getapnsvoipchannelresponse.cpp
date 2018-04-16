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

#include "getapnsvoipchannelresponse.h"
#include "getapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipChannelResponse
 *
 * \brief The GetApnsVoipChannelResponse class encapsulates Pinpoint GetApnsVoipChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getApnsVoipChannel
 */

/*!
 * @brief  Constructs a new GetApnsVoipChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApnsVoipChannelResponse::GetApnsVoipChannelResponse(
        const GetApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new GetApnsVoipChannelRequest(request));
    setReply(reply);
}

const GetApnsVoipChannelRequest * GetApnsVoipChannelResponse::request() const
{
    Q_D(const GetApnsVoipChannelResponse);
    return static_cast<const GetApnsVoipChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetApnsVoipChannel response.
 *
 * @param  response  Response to parse.
 */
void GetApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetApnsVoipChannelResponsePrivate
 *
 * \brief Private implementation for GetApnsVoipChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetApnsVoipChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApnsVoipChannelResponse instance.
 */
GetApnsVoipChannelResponsePrivate::GetApnsVoipChannelResponsePrivate(
    GetApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetApnsVoipChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApnsVoipChannelResponsePrivate::parseGetApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApnsVoipChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
