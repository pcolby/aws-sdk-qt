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

#include "listimportsresponse.h"
#include "listimportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  ListImportsResponse
 *
 * @brief  Handles CloudFormation ListImports responses.
 *
 * @see    CloudFormationClient::listImports
 */

/**
 * @brief  Constructs a new ListImportsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListImportsResponse::ListImportsResponse(
        const ListImportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListImportsResponsePrivate(this), parent)
{
    setRequest(new ListImportsRequest(request));
    setReply(reply);
}

const ListImportsRequest * ListImportsResponse::request() const
{
    Q_D(const ListImportsResponse);
    return static_cast<const ListImportsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListImports response.
 *
 * @param  response  Response to parse.
 */
void ListImportsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListImportsResponsePrivate
 *
 * @brief  Private implementation for ListImportsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListImportsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListImportsResponse instance.
 */
ListImportsResponsePrivate::ListImportsResponsePrivate(
    ListImportsQueueResponse * const q) : ListImportsPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListImportsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListImportsResponsePrivate::ListImportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImportsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace AWS
