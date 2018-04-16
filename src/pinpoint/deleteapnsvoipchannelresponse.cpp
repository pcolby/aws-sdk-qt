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

#include "deleteapnsvoipchannelresponse.h"
#include "deleteapnsvoipchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelResponse
 *
 * \brief The DeleteApnsVoipChannelResponse class encapsulates Pinpoint DeleteApnsVoipChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteApnsVoipChannel
 */

/*!
 * @brief  Constructs a new DeleteApnsVoipChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApnsVoipChannelResponse::DeleteApnsVoipChannelResponse(
        const DeleteApnsVoipChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsVoipChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsVoipChannelRequest(request));
    setReply(reply);
}

const DeleteApnsVoipChannelRequest * DeleteApnsVoipChannelResponse::request() const
{
    Q_D(const DeleteApnsVoipChannelResponse);
    return static_cast<const DeleteApnsVoipChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint DeleteApnsVoipChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteApnsVoipChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApnsVoipChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteApnsVoipChannelResponsePrivate
 *
 * \brief Private implementation for DeleteApnsVoipChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsVoipChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApnsVoipChannelResponse instance.
 */
DeleteApnsVoipChannelResponsePrivate::DeleteApnsVoipChannelResponsePrivate(
    DeleteApnsVoipChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint DeleteApnsVoipChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApnsVoipChannelResponsePrivate::parseDeleteApnsVoipChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsVoipChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
