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

#include "listfhirexportjobsresponse.h"
#include "listfhirexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::ListFHIRExportJobsResponse
 * \brief The ListFHIRExportJobsResponse class provides an interace for HealthLake ListFHIRExportJobs responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::listFHIRExportJobs
 */

/*!
 * Constructs a ListFHIRExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFHIRExportJobsResponse::ListFHIRExportJobsResponse(
        const ListFHIRExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new ListFHIRExportJobsResponsePrivate(this), parent)
{
    setRequest(new ListFHIRExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFHIRExportJobsRequest * ListFHIRExportJobsResponse::request() const
{
    Q_D(const ListFHIRExportJobsResponse);
    return static_cast<const ListFHIRExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake ListFHIRExportJobs \a response.
 */
void ListFHIRExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFHIRExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::ListFHIRExportJobsResponsePrivate
 * \brief The ListFHIRExportJobsResponsePrivate class provides private implementation for ListFHIRExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a ListFHIRExportJobsResponsePrivate object with public implementation \a q.
 */
ListFHIRExportJobsResponsePrivate::ListFHIRExportJobsResponsePrivate(
    ListFHIRExportJobsResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake ListFHIRExportJobs response element from \a xml.
 */
void ListFHIRExportJobsResponsePrivate::parseListFHIRExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFHIRExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
