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

#include "deleteapplicationresponse.h"
#include "deleteapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationResponse
 *
 * @brief  Handles KinesisAnalytics DeleteApplication responses.
 *
 * @see    KinesisAnalyticsClient::deleteApplication
 */

/**
 * @brief  Constructs a new DeleteApplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationResponse::DeleteApplicationResponse(
        const DeleteApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationRequest(request));
    setReply(reply);
}

const DeleteApplicationRequest * DeleteApplicationResponse::request() const
{
    Q_D(const DeleteApplicationResponse);
    return static_cast<const DeleteApplicationRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics DeleteApplication response.
 *
 * @param  response  Response to parse.
 */
void DeleteApplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApplicationResponsePrivate
 *
 * @brief  Private implementation for DeleteApplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApplicationResponse instance.
 */
DeleteApplicationResponsePrivate::DeleteApplicationResponsePrivate(
    DeleteApplicationQueueResponse * const q) : DeleteApplicationPrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics DeleteApplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApplicationResponsePrivate::DeleteApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
