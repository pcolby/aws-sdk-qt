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

#include "listexportsresponse.h"
#include "listexportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  ListExportsResponse
 *
 * @brief  Handles CloudFormation ListExports responses.
 *
 * @see    CloudFormationClient::listExports
 */

/**
 * @brief  Constructs a new ListExportsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListExportsResponse::ListExportsResponse(
        const ListExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListExportsResponsePrivate(this), parent)
{
    setRequest(new ListExportsRequest(request));
    setReply(reply);
}

const ListExportsRequest * ListExportsResponse::request() const
{
    Q_D(const ListExportsResponse);
    return static_cast<const ListExportsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListExports response.
 *
 * @param  response  Response to parse.
 */
void ListExportsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListExportsResponsePrivate
 *
 * @brief  Private implementation for ListExportsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListExportsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListExportsResponse instance.
 */
ListExportsResponsePrivate::ListExportsResponsePrivate(
    ListExportsQueueResponse * const q) : ListExportsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListExportsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListExportsResponsePrivate::ListExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExportsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
