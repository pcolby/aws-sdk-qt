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

#include "liststacksetsresponse.h"
#include "liststacksetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListStackSetsResponse
 *
 * @brief  Handles CloudFormation ListStackSets responses.
 *
 * @see    CloudFormationClient::listStackSets
 */

/**
 * @brief  Constructs a new ListStackSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListStackSetsResponse::ListStackSetsResponse(
        const ListStackSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListStackSetsResponse(new ListStackSetsResponsePrivate(this), parent)
{
    setRequest(new ListStackSetsRequest(request));
    setReply(reply);
}

const ListStackSetsRequest * ListStackSetsResponse::request() const
{
    Q_D(const ListStackSetsResponse);
    return static_cast<const ListStackSetsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation ListStackSets response.
 *
 * @param  response  Response to parse.
 */
void ListStackSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListStackSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListStackSetsResponsePrivate
 *
 * @brief  Private implementation for ListStackSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListStackSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStackSetsResponse instance.
 */
ListStackSetsResponsePrivate::ListStackSetsResponsePrivate(
    ListStackSetsResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation ListStackSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStackSetsResponsePrivate::parseListStackSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackSetsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
