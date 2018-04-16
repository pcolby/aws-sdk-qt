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

#include "startchannelresponse.h"
#include "startchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::StartChannelResponse
 *
 * \brief The StartChannelResponse class encapsulates MediaLive StartChannel responses.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::startChannel
 */

/*!
 * @brief  Constructs a new StartChannelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartChannelResponse::StartChannelResponse(
        const StartChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new StartChannelResponsePrivate(this), parent)
{
    setRequest(new StartChannelRequest(request));
    setReply(reply);
}

const StartChannelRequest * StartChannelResponse::request() const
{
    Q_D(const StartChannelResponse);
    return static_cast<const StartChannelRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaLive StartChannel response.
 *
 * @param  response  Response to parse.
 */
void StartChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class StartChannelResponsePrivate
 *
 * \brief Private implementation for StartChannelResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartChannelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartChannelResponse instance.
 */
StartChannelResponsePrivate::StartChannelResponsePrivate(
    StartChannelResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaLive StartChannelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartChannelResponsePrivate::parseStartChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartChannelResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
