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
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
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
