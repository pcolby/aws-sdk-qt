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

#include "updateapnssandboxchannelresponse.h"
#include "updateapnssandboxchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsSandboxChannelResponse
 *
 * \brief The UpdateApnsSandboxChannelResponse class encapsulates Pinpoint UpdateApnsSandboxChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::updateApnsSandboxChannel
 */

/*!
 * @brief  Constructs a new UpdateApnsSandboxChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApnsSandboxChannelResponse::UpdateApnsSandboxChannelResponse(
        const UpdateApnsSandboxChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateApnsSandboxChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateApnsSandboxChannelRequest(request));
    setReply(reply);
}

const UpdateApnsSandboxChannelRequest * UpdateApnsSandboxChannelResponse::request() const
{
    Q_D(const UpdateApnsSandboxChannelResponse);
    return static_cast<const UpdateApnsSandboxChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint UpdateApnsSandboxChannel response.
 *
 * @param  response  Response to parse.
 */
void UpdateApnsSandboxChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateApnsSandboxChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateApnsSandboxChannelResponsePrivate
 *
 * \brief Private implementation for UpdateApnsSandboxChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateApnsSandboxChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApnsSandboxChannelResponse instance.
 */
UpdateApnsSandboxChannelResponsePrivate::UpdateApnsSandboxChannelResponsePrivate(
    UpdateApnsSandboxChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint UpdateApnsSandboxChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApnsSandboxChannelResponsePrivate::parseUpdateApnsSandboxChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApnsSandboxChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
