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

#include "listfiltersresponse.h"
#include "listfiltersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListFiltersResponse
 * \brief The ListFiltersResponse class provides an interace for Inspector2 ListFilters responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listFilters
 */

/*!
 * Constructs a ListFiltersResponse object for \a reply to \a request, with parent \a parent.
 */
ListFiltersResponse::ListFiltersResponse(
        const ListFiltersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListFiltersResponsePrivate(this), parent)
{
    setRequest(new ListFiltersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFiltersRequest * ListFiltersResponse::request() const
{
    Q_D(const ListFiltersResponse);
    return static_cast<const ListFiltersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListFilters \a response.
 */
void ListFiltersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFiltersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListFiltersResponsePrivate
 * \brief The ListFiltersResponsePrivate class provides private implementation for ListFiltersResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListFiltersResponsePrivate object with public implementation \a q.
 */
ListFiltersResponsePrivate::ListFiltersResponsePrivate(
    ListFiltersResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListFilters response element from \a xml.
 */
void ListFiltersResponsePrivate::parseListFiltersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFiltersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
