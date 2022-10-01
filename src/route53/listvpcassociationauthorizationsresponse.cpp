// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
