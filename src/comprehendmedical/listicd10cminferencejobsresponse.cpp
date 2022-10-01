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

#include "listicd10cminferencejobsresponse.h"
#include "listicd10cminferencejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListICD10CMInferenceJobsResponse
 * \brief The ListICD10CMInferenceJobsResponse class provides an interace for ComprehendMedical ListICD10CMInferenceJobs responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::listICD10CMInferenceJobs
 */

/*!
 * Constructs a ListICD10CMInferenceJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListICD10CMInferenceJobsResponse::ListICD10CMInferenceJobsResponse(
        const ListICD10CMInferenceJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new ListICD10CMInferenceJobsResponsePrivate(this), parent)
{
    setRequest(new ListICD10CMInferenceJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListICD10CMInferenceJobsRequest * ListICD10CMInferenceJobsResponse::request() const
{
    Q_D(const ListICD10CMInferenceJobsResponse);
    return static_cast<const ListICD10CMInferenceJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical ListICD10CMInferenceJobs \a response.
 */
void ListICD10CMInferenceJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListICD10CMInferenceJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::ListICD10CMInferenceJobsResponsePrivate
 * \brief The ListICD10CMInferenceJobsResponsePrivate class provides private implementation for ListICD10CMInferenceJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListICD10CMInferenceJobsResponsePrivate object with public implementation \a q.
 */
ListICD10CMInferenceJobsResponsePrivate::ListICD10CMInferenceJobsResponsePrivate(
    ListICD10CMInferenceJobsResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical ListICD10CMInferenceJobs response element from \a xml.
 */
void ListICD10CMInferenceJobsResponsePrivate::parseListICD10CMInferenceJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListICD10CMInferenceJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
