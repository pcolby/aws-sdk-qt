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

#include "listchannelsresponse.h"
#include "listchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListChannelsResponse
 *
 * \brief The ListChannelsResponse class encapsulates MediaLive ListChannels responses.
 *
 * \ingroup MediaLive
 *
 *
 * \sa MediaLiveClient::listChannels
 */

/*!
 * @brief  Constructs a new ListChannelsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListChannelsResponse::ListChannelsResponse(
        const ListChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListChannelsResponsePrivate(this), parent)
{
    setRequest(new ListChannelsRequest(request));
    setReply(reply);
}

const ListChannelsRequest * ListChannelsResponse::request() const
{
    Q_D(const ListChannelsResponse);
    return static_cast<const ListChannelsRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaLive ListChannels response.
 *
 * @param  response  Response to parse.
 */
void ListChannelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListChannelsResponsePrivate
 *
 * \brief Private implementation for ListChannelsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListChannelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListChannelsResponse instance.
 */
ListChannelsResponsePrivate::ListChannelsResponsePrivate(
    ListChannelsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaLive ListChannelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListChannelsResponsePrivate::parseListChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelsResponse"));
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
