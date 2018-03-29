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

#include "listvpcassociationauthorizationsresponse.h"
#include "listvpcassociationauthorizationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  ListVPCAssociationAuthorizationsResponse
 *
 * @brief  Handles Route53 ListVPCAssociationAuthorizations responses.
 *
 * @see    Route53Client::listVPCAssociationAuthorizations
 */

/**
 * @brief  Constructs a new ListVPCAssociationAuthorizationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVPCAssociationAuthorizationsResponse::ListVPCAssociationAuthorizationsResponse(
        const ListVPCAssociationAuthorizationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new ListVPCAssociationAuthorizationsResponsePrivate(this), parent)
{
    setRequest(new ListVPCAssociationAuthorizationsRequest(request));
    setReply(reply);
}

const ListVPCAssociationAuthorizationsRequest * ListVPCAssociationAuthorizationsResponse::request() const
{
    Q_D(const ListVPCAssociationAuthorizationsResponse);
    return static_cast<const ListVPCAssociationAuthorizationsRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 ListVPCAssociationAuthorizations response.
 *
 * @param  response  Response to parse.
 */
void ListVPCAssociationAuthorizationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVPCAssociationAuthorizationsResponsePrivate
 *
 * @brief  Private implementation for ListVPCAssociationAuthorizationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVPCAssociationAuthorizationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVPCAssociationAuthorizationsResponse instance.
 */
ListVPCAssociationAuthorizationsResponsePrivate::ListVPCAssociationAuthorizationsResponsePrivate(
    ListVPCAssociationAuthorizationsResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 ListVPCAssociationAuthorizationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVPCAssociationAuthorizationsResponsePrivate::ListVPCAssociationAuthorizationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVPCAssociationAuthorizationsResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
