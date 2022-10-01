// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listphidetectionjobsresponse.h"
#include "listphidetectionjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListPHIDetectionJobsResponse
 * \brief The ListPHIDetectionJobsResponse class provides an interace for ComprehendMedical ListPHIDetectionJobs responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::listPHIDetectionJobs
 */

/*!
 * Constructs a ListPHIDetectionJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPHIDetectionJobsResponse::ListPHIDetectionJobsResponse(
        const ListPHIDetectionJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new ListPHIDetectionJobsResponsePrivate(this), parent)
{
    setRequest(new ListPHIDetectionJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPHIDetectionJobsRequest * ListPHIDetectionJobsResponse::request() const
{
    Q_D(const ListPHIDetectionJobsResponse);
    return static_cast<const ListPHIDetectionJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical ListPHIDetectionJobs \a response.
 */
void ListPHIDetectionJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPHIDetectionJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::ListPHIDetectionJobsResponsePrivate
 * \brief The ListPHIDetectionJobsResponsePrivate class provides private implementation for ListPHIDetectionJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListPHIDetectionJobsResponsePrivate object with public implementation \a q.
 */
ListPHIDetectionJobsResponsePrivate::ListPHIDetectionJobsResponsePrivate(
    ListPHIDetectionJobsResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical ListPHIDetectionJobs response element from \a xml.
 */
void ListPHIDetectionJobsResponsePrivate::parseListPHIDetectionJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPHIDetectionJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
