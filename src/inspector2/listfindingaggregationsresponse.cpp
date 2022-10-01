/*
    Copyright 2013-2021 Paul Colby

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

#include "listfindingaggregationsresponse.h"
#include "listfindingaggregationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListFindingAggregationsResponse
 * \brief The ListFindingAggregationsResponse class provides an interace for Inspector2 ListFindingAggregations responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listFindingAggregations
 */

/*!
 * Constructs a ListFindingAggregationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFindingAggregationsResponse::ListFindingAggregationsResponse(
        const ListFindingAggregationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListFindingAggregationsResponsePrivate(this), parent)
{
    setRequest(new ListFindingAggregationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFindingAggregationsRequest * ListFindingAggregationsResponse::request() const
{
    Q_D(const ListFindingAggregationsResponse);
    return static_cast<const ListFindingAggregationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListFindingAggregations \a response.
 */
void ListFindingAggregationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFindingAggregationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListFindingAggregationsResponsePrivate
 * \brief The ListFindingAggregationsResponsePrivate class provides private implementation for ListFindingAggregationsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListFindingAggregationsResponsePrivate object with public implementation \a q.
 */
ListFindingAggregationsResponsePrivate::ListFindingAggregationsResponsePrivate(
    ListFindingAggregationsResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListFindingAggregations response element from \a xml.
 */
void ListFindingAggregationsResponsePrivate::parseListFindingAggregationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFindingAggregationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
