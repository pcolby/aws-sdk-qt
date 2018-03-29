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

#include "listassociationsresponse.h"
#include "listassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  ListAssociationsResponse
 *
 * @brief  Handles SSM ListAssociations responses.
 *
 * @see    SSMClient::listAssociations
 */

/**
 * @brief  Constructs a new ListAssociationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssociationsResponse::ListAssociationsResponse(
        const ListAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new ListAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListAssociationsRequest(request));
    setReply(reply);
}

const ListAssociationsRequest * ListAssociationsResponse::request() const
{
    Q_D(const ListAssociationsResponse);
    return static_cast<const ListAssociationsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM ListAssociations response.
 *
 * @param  response  Response to parse.
 */
void ListAssociationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAssociationsResponsePrivate
 *
 * @brief  Private implementation for ListAssociationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssociationsResponse instance.
 */
ListAssociationsResponsePrivate::ListAssociationsResponsePrivate(
    ListAssociationsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM ListAssociationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssociationsResponsePrivate::parseListAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociationsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
