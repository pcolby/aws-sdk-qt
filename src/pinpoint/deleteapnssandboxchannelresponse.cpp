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

#include "deleteapnssandboxchannelresponse.h"
#include "deleteapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsSandboxChannelResponse
 *
 * \brief The DeleteApnsSandboxChannelResponse class provides an interace for Pinpoint DeleteApnsSandboxChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteApnsSandboxChannel
 */

/*!
 * @brief  Constructs a new DeleteApnsSandboxChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApnsSandboxChannelResponse::DeleteApnsSandboxChannelResponse(
        const DeleteApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteApnsSandboxChannelRequest(request));
    setReply(reply);
}

const DeleteApnsSandboxChannelRequest * DeleteApnsSandboxChannelResponse::request() const
{
    Q_D(const DeleteApnsSandboxChannelResponse);
    return static_cast<const DeleteApnsSandboxChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint DeleteApnsSandboxChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteApnsSandboxChannelResponsePrivate
 *
 * \brief Private implementation for DeleteApnsSandboxChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApnsSandboxChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApnsSandboxChannelResponse instance.
 */
DeleteApnsSandboxChannelResponsePrivate::DeleteApnsSandboxChannelResponsePrivate(
    DeleteApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint DeleteApnsSandboxChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApnsSandboxChannelResponsePrivate::parseDeleteApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApnsSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
