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

#include "listschedulesresponse.h"
#include "listschedulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListSchedulesResponse
 * \brief The ListSchedulesResponse class provides an interace for DataBrew ListSchedules responses.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listSchedules
 */

/*!
 * Constructs a ListSchedulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchedulesResponse::ListSchedulesResponse(
        const ListSchedulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataBrewResponse(new ListSchedulesResponsePrivate(this), parent)
{
    setRequest(new ListSchedulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchedulesRequest * ListSchedulesResponse::request() const
{
    Q_D(const ListSchedulesResponse);
    return static_cast<const ListSchedulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataBrew ListSchedules \a response.
 */
void ListSchedulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchedulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataBrew::ListSchedulesResponsePrivate
 * \brief The ListSchedulesResponsePrivate class provides private implementation for ListSchedulesResponse.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListSchedulesResponsePrivate object with public implementation \a q.
 */
ListSchedulesResponsePrivate::ListSchedulesResponsePrivate(
    ListSchedulesResponse * const q) : DataBrewResponsePrivate(q)
{

}

/*!
 * Parses a DataBrew ListSchedules response element from \a xml.
 */
void ListSchedulesResponsePrivate::parseListSchedulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchedulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataBrew
} // namespace QtAws
