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

#include "deletequeueresponse.h"
#include "deletequeueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeleteQueueResponse
 *
 * \brief The DeleteQueueResponse class encapsulates MediaConvert DeleteQueue responses.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::deleteQueue
 */

/*!
 * @brief  Constructs a new DeleteQueueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteQueueResponse::DeleteQueueResponse(
        const DeleteQueueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DeleteQueueResponsePrivate(this), parent)
{
    setRequest(new DeleteQueueRequest(request));
    setReply(reply);
}

const DeleteQueueRequest * DeleteQueueResponse::request() const
{
    Q_D(const DeleteQueueResponse);
    return static_cast<const DeleteQueueRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaConvert DeleteQueue response.
 *
 * @param  response  Response to parse.
 */
void DeleteQueueResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteQueueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteQueueResponsePrivate
 *
 * \brief Private implementation for DeleteQueueResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteQueueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteQueueResponse instance.
 */
DeleteQueueResponsePrivate::DeleteQueueResponsePrivate(
    DeleteQueueResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaConvert DeleteQueueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteQueueResponsePrivate::parseDeleteQueueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueueResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
