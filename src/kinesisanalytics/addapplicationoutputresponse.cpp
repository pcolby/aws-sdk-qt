/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "addapplicationoutputresponse.h"
#include "addapplicationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  AddApplicationOutputResponse
 *
 * @brief  Handles KinesisAnalytics AddApplicationOutput responses.
 *
 * @see    KinesisAnalyticsClient::addApplicationOutput
 */

/**
 * @brief  Constructs a new AddApplicationOutputResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddApplicationOutputResponse::AddApplicationOutputResponse(
        const AddApplicationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new AddApplicationOutputResponsePrivate(this), parent)
{
    setRequest(new AddApplicationOutputRequest(request));
    setReply(reply);
}

const AddApplicationOutputRequest * AddApplicationOutputResponse::request() const
{
    Q_D(const AddApplicationOutputResponse);
    return static_cast<const AddApplicationOutputRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics AddApplicationOutput response.
 *
 * @param  response  Response to parse.
 */
void AddApplicationOutputResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddApplicationOutputResponsePrivate
 *
 * @brief  Private implementation for AddApplicationOutputResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddApplicationOutputResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddApplicationOutputResponse instance.
 */
AddApplicationOutputResponsePrivate::AddApplicationOutputResponsePrivate(
    AddApplicationOutputQueueResponse * const q) : AddApplicationOutputPrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics AddApplicationOutputResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddApplicationOutputResponsePrivate::AddApplicationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddApplicationOutputResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace AWS
