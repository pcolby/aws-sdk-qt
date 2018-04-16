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

#include "getemailchannelresponse.h"
#include "getemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEmailChannelResponse
 *
 * \brief The GetEmailChannelResponse class encapsulates Pinpoint GetEmailChannel responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getEmailChannel
 */

/*!
 * @brief  Constructs a new GetEmailChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEmailChannelResponse::GetEmailChannelResponse(
        const GetEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEmailChannelResponsePrivate(this), parent)
{
    setRequest(new GetEmailChannelRequest(request));
    setReply(reply);
}

const GetEmailChannelRequest * GetEmailChannelResponse::request() const
{
    Q_D(const GetEmailChannelResponse);
    return static_cast<const GetEmailChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint GetEmailChannel response.
 *
 * @param  response  Response to parse.
 */
void GetEmailChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetEmailChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetEmailChannelResponsePrivate
 *
 * \brief Private implementation for GetEmailChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetEmailChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEmailChannelResponse instance.
 */
GetEmailChannelResponsePrivate::GetEmailChannelResponsePrivate(
    GetEmailChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint GetEmailChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEmailChannelResponsePrivate::parseGetEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEmailChannelResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
