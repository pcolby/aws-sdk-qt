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

#include "listcoverageresponse.h"
#include "listcoverageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListCoverageResponse
 * \brief The ListCoverageResponse class provides an interace for Inspector2 ListCoverage responses.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listCoverage
 */

/*!
 * Constructs a ListCoverageResponse object for \a reply to \a request, with parent \a parent.
 */
ListCoverageResponse::ListCoverageResponse(
        const ListCoverageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Inspector2Response(new ListCoverageResponsePrivate(this), parent)
{
    setRequest(new ListCoverageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCoverageRequest * ListCoverageResponse::request() const
{
    Q_D(const ListCoverageResponse);
    return static_cast<const ListCoverageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Inspector2 ListCoverage \a response.
 */
void ListCoverageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCoverageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Inspector2::ListCoverageResponsePrivate
 * \brief The ListCoverageResponsePrivate class provides private implementation for ListCoverageResponse.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListCoverageResponsePrivate object with public implementation \a q.
 */
ListCoverageResponsePrivate::ListCoverageResponsePrivate(
    ListCoverageResponse * const q) : Inspector2ResponsePrivate(q)
{

}

/*!
 * Parses a Inspector2 ListCoverage response element from \a xml.
 */
void ListCoverageResponsePrivate::parseListCoverageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCoverageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Inspector2
} // namespace QtAws
