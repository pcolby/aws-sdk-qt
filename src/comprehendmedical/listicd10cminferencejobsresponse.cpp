// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
