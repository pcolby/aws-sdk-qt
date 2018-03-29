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

#include "listtopicsresponse.h"
#include "listtopicsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  ListTopicsResponse
 *
 * @brief  Handles SNS ListTopics responses.
 *
 * @see    SNSClient::listTopics
 */

/**
 * @brief  Constructs a new ListTopicsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTopicsResponse::ListTopicsResponse(
        const ListTopicsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListTopicsResponse(new ListTopicsResponsePrivate(this), parent)
{
    setRequest(new ListTopicsRequest(request));
    setReply(reply);
}

const ListTopicsRequest * ListTopicsResponse::request() const
{
    Q_D(const ListTopicsResponse);
    return static_cast<const ListTopicsRequest *>(d->request);
}

/**
 * @brief  Parse a SNS ListTopics response.
 *
 * @param  response  Response to parse.
 */
void ListTopicsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTopicsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTopicsResponsePrivate
 *
 * @brief  Private implementation for ListTopicsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTopicsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTopicsResponse instance.
 */
ListTopicsResponsePrivate::ListTopicsResponsePrivate(
    ListTopicsResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS ListTopicsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTopicsResponsePrivate::parseListTopicsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTopicsResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
