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

#include "listdatasetgroupsresponse.h"
#include "listdatasetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListDatasetGroupsResponse
 * \brief The ListDatasetGroupsResponse class provides an interace for Forecast ListDatasetGroups responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listDatasetGroups
 */

/*!
 * Constructs a ListDatasetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetGroupsResponse::ListDatasetGroupsResponse(
        const ListDatasetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListDatasetGroupsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetGroupsRequest * ListDatasetGroupsResponse::request() const
{
    Q_D(const ListDatasetGroupsResponse);
    return static_cast<const ListDatasetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListDatasetGroups \a response.
 */
void ListDatasetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListDatasetGroupsResponsePrivate
 * \brief The ListDatasetGroupsResponsePrivate class provides private implementation for ListDatasetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListDatasetGroupsResponsePrivate object with public implementation \a q.
 */
ListDatasetGroupsResponsePrivate::ListDatasetGroupsResponsePrivate(
    ListDatasetGroupsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListDatasetGroups response element from \a xml.
 */
void ListDatasetGroupsResponsePrivate::parseListDatasetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
