// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfhirimportjobsresponse.h"
#include "listfhirimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::ListFHIRImportJobsResponse
 * \brief The ListFHIRImportJobsResponse class provides an interace for HealthLake ListFHIRImportJobs responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::listFHIRImportJobs
 */

/*!
 * Constructs a ListFHIRImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListFHIRImportJobsResponse::ListFHIRImportJobsResponse(
        const ListFHIRImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new ListFHIRImportJobsResponsePrivate(this), parent)
{
    setRequest(new ListFHIRImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFHIRImportJobsRequest * ListFHIRImportJobsResponse::request() const
{
    Q_D(const ListFHIRImportJobsResponse);
    return static_cast<const ListFHIRImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake ListFHIRImportJobs \a response.
 */
void ListFHIRImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFHIRImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::ListFHIRImportJobsResponsePrivate
 * \brief The ListFHIRImportJobsResponsePrivate class provides private implementation for ListFHIRImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a ListFHIRImportJobsResponsePrivate object with public implementation \a q.
 */
ListFHIRImportJobsResponsePrivate::ListFHIRImportJobsResponsePrivate(
    ListFHIRImportJobsResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake ListFHIRImportJobs response element from \a xml.
 */
void ListFHIRImportJobsResponsePrivate::parseListFHIRImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFHIRImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
