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

#include "deleteapplicationoutputresponse.h"
#include "deleteapplicationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationOutputResponse
 *
 * @brief  Handles KinesisAnalytics DeleteApplicationOutput responses.
 *
 * @see    KinesisAnalyticsClient::deleteApplicationOutput
 */

/**
 * @brief  Constructs a new DeleteApplicationOutputResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationOutputResponse::DeleteApplicationOutputResponse(
        const DeleteApplicationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationOutputResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationOutputRequest(request));
    setReply(reply);
}

const DeleteApplicationOutputRequest * DeleteApplicationOutputResponse::request() const
{
    Q_D(const DeleteApplicationOutputResponse);
    return static_cast<const DeleteApplicationOutputRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics DeleteApplicationOutput response.
 *
 * @param  response  Response to parse.
 */
void DeleteApplicationOutputResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteApplicationOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApplicationOutputResponsePrivate
 *
 * @brief  Private implementation for DeleteApplicationOutputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationOutputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApplicationOutputResponse instance.
 */
DeleteApplicationOutputResponsePrivate::DeleteApplicationOutputResponsePrivate(
    DeleteApplicationOutputResponse * const q) : KinesisAnalyticsResponsePrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics DeleteApplicationOutputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApplicationOutputResponsePrivate::parseDeleteApplicationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationOutputResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace QtAws
