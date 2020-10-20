/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listvpcassociationauthorizationsresponse.h"
#include "listvpcassociationauthorizationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListVPCAssociationAuthorizationsResponse
 * \brief The ListVPCAssociationAuthorizationsResponse class provides an interace for Route53 ListVPCAssociationAuthorizations responses.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listVPCAssociationAuthorizations
 */

/*!
 * Constructs a ListVPCAssociationAuthorizationsResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const ListVPCAssociationAuthorizationsRequest * ListVPCAssociationAuthorizationsResponse::request() const
{
    Q_D(const ListVPCAssociationAuthorizationsResponse);
    return static_cast<const ListVPCAssociationAuthorizationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53 ListVPCAssociationAuthorizations \a response.
 */
void ListVPCAssociationAuthorizationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVPCAssociationAuthorizationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53::ListVPCAssociationAuthorizationsResponsePrivate
 * \brief The ListVPCAssociationAuthorizationsResponsePrivate class provides private implementation for ListVPCAssociationAuthorizationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListVPCAssociationAuthorizationsResponsePrivate object with public implementation \a q.
 */
ListVPCAssociationAuthorizationsResponsePrivate::ListVPCAssociationAuthorizationsResponsePrivate(
    ListVPCAssociationAuthorizationsResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * Parses a Route53 ListVPCAssociationAuthorizations response element from \a xml.
 */
void ListVPCAssociationAuthorizationsResponsePrivate::parseListVPCAssociationAuthorizationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVPCAssociationAuthorizationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53
} // namespace QtAws
