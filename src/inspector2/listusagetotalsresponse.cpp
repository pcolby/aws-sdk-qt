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

#include "listusagetotalsresponse.h"
#include "listusagetotalsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListUsageTotalsResponse
 * \brief The ListUsageTotalsResponse class provides an interace for Inspector2 ListUsageTotals responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listUsageTotals
 */

/*!
 * Constructs a ListUsageTotalsResponse object for \a reply to \a request, with parent \a parent.
 */
ListUsageTotalsResponse::ListUsageTotalsResponse(
        const ListUsageTotalsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListUsageTotalsResponsePrivate(this), parent)
{
    setRequest(new ListUsageTotalsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListUsageTotalsRequest * ListUsageTotalsResponse::request() const
{
    Q_D(const ListUsageTotalsResponse);
    return static_cast<const ListUsageTotalsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListUsageTotals \a response.
 */
void ListUsageTotalsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListUsageTotalsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListUsageTotalsResponsePrivate
 * \brief The ListUsageTotalsResponsePrivate class provides private implementation for ListUsageTotalsResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListUsageTotalsResponsePrivate object with public implementation \a q.
 */
ListUsageTotalsResponsePrivate::ListUsageTotalsResponsePrivate(
    ListUsageTotalsResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListUsageTotals response element from \a xml.
 */
void ListUsageTotalsResponsePrivate::parseListUsageTotalsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUsageTotalsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
