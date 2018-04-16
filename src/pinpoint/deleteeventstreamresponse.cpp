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

#include "deleteeventstreamresponse.h"
#include "deleteeventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamResponse
 *
 * \brief The DeleteEventStreamResponse class encapsulates Pinpoint DeleteEventStream responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::deleteEventStream
 */

/*!
 * @brief  Constructs a new DeleteEventStreamResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEventStreamResponse::DeleteEventStreamResponse(
        const DeleteEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteEventStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteEventStreamRequest(request));
    setReply(reply);
}

const DeleteEventStreamRequest * DeleteEventStreamResponse::request() const
{
    Q_D(const DeleteEventStreamResponse);
    return static_cast<const DeleteEventStreamRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint DeleteEventStream response.
 *
 * @param  response  Response to parse.
 */
void DeleteEventStreamResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteEventStreamResponsePrivate
 *
 * \brief Private implementation for DeleteEventStreamResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteEventStreamResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEventStreamResponse instance.
 */
DeleteEventStreamResponsePrivate::DeleteEventStreamResponsePrivate(
    DeleteEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint DeleteEventStreamResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEventStreamResponsePrivate::parseDeleteEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventStreamResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
