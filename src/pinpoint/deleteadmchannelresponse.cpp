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

#include "deleteadmchannelresponse.h"
#include "deleteadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelResponse
 *
 * \brief The DeleteAdmChannelResponse class provides an interace for Pinpoint DeleteAdmChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteAdmChannel
 */

/*!
 * @brief  Constructs a new DeleteAdmChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAdmChannelResponse::DeleteAdmChannelResponse(
        const DeleteAdmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteAdmChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteAdmChannelRequest(request));
    setReply(reply);
}

const DeleteAdmChannelRequest * DeleteAdmChannelResponse::request() const
{
    Q_D(const DeleteAdmChannelResponse);
    return static_cast<const DeleteAdmChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint DeleteAdmChannel response.
 *
 * @param  response  Response to parse.
 */
void DeleteAdmChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteAdmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteAdmChannelResponsePrivate
 *
 * \brief Private implementation for DeleteAdmChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteAdmChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAdmChannelResponse instance.
 */
DeleteAdmChannelResponsePrivate::DeleteAdmChannelResponsePrivate(
    DeleteAdmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint DeleteAdmChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAdmChannelResponsePrivate::parseDeleteAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAdmChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
