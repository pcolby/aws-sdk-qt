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

#include "listengineversionsresponse.h"
#include "listengineversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListEngineVersionsResponse
 * \brief The ListEngineVersionsResponse class provides an interace for M2 ListEngineVersions responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listEngineVersions
 */

/*!
 * Constructs a ListEngineVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEngineVersionsResponse::ListEngineVersionsResponse(
        const ListEngineVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListEngineVersionsResponsePrivate(this), parent)
{
    setRequest(new ListEngineVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEngineVersionsRequest * ListEngineVersionsResponse::request() const
{
    Q_D(const ListEngineVersionsResponse);
    return static_cast<const ListEngineVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListEngineVersions \a response.
 */
void ListEngineVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEngineVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListEngineVersionsResponsePrivate
 * \brief The ListEngineVersionsResponsePrivate class provides private implementation for ListEngineVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListEngineVersionsResponsePrivate object with public implementation \a q.
 */
ListEngineVersionsResponsePrivate::ListEngineVersionsResponsePrivate(
    ListEngineVersionsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListEngineVersions response element from \a xml.
 */
void ListEngineVersionsResponsePrivate::parseListEngineVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEngineVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
