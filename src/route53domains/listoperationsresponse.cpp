// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoperationsresponse.h"
#include "listoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListOperationsResponse
 * \brief The ListOperationsResponse class provides an interace for Route53Domains ListOperations responses.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listOperations
 */

/*!
 * Constructs a ListOperationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOperationsResponse::ListOperationsResponse(
        const ListOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53DomainsResponse(new ListOperationsResponsePrivate(this), parent)
{
    setRequest(new ListOperationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOperationsRequest * ListOperationsResponse::request() const
{
    Q_D(const ListOperationsResponse);
    return static_cast<const ListOperationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53Domains ListOperations \a response.
 */
void ListOperationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53Domains::ListOperationsResponsePrivate
 * \brief The ListOperationsResponsePrivate class provides private implementation for ListOperationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListOperationsResponsePrivate object with public implementation \a q.
 */
ListOperationsResponsePrivate::ListOperationsResponsePrivate(
    ListOperationsResponse * const q) : Route53DomainsResponsePrivate(q)
{

}

/*!
 * Parses a Route53Domains ListOperations response element from \a xml.
 */
void ListOperationsResponsePrivate::parseListOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOperationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53Domains
} // namespace QtAws
