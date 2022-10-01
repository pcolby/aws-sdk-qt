// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsnomedctinferencejobsresponse.h"
#include "listsnomedctinferencejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListSNOMEDCTInferenceJobsResponse
 * \brief The ListSNOMEDCTInferenceJobsResponse class provides an interace for ComprehendMedical ListSNOMEDCTInferenceJobs responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::listSNOMEDCTInferenceJobs
 */

/*!
 * Constructs a ListSNOMEDCTInferenceJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSNOMEDCTInferenceJobsResponse::ListSNOMEDCTInferenceJobsResponse(
        const ListSNOMEDCTInferenceJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new ListSNOMEDCTInferenceJobsResponsePrivate(this), parent)
{
    setRequest(new ListSNOMEDCTInferenceJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSNOMEDCTInferenceJobsRequest * ListSNOMEDCTInferenceJobsResponse::request() const
{
    Q_D(const ListSNOMEDCTInferenceJobsResponse);
    return static_cast<const ListSNOMEDCTInferenceJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical ListSNOMEDCTInferenceJobs \a response.
 */
void ListSNOMEDCTInferenceJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSNOMEDCTInferenceJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::ListSNOMEDCTInferenceJobsResponsePrivate
 * \brief The ListSNOMEDCTInferenceJobsResponsePrivate class provides private implementation for ListSNOMEDCTInferenceJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListSNOMEDCTInferenceJobsResponsePrivate object with public implementation \a q.
 */
ListSNOMEDCTInferenceJobsResponsePrivate::ListSNOMEDCTInferenceJobsResponsePrivate(
    ListSNOMEDCTInferenceJobsResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical ListSNOMEDCTInferenceJobs response element from \a xml.
 */
void ListSNOMEDCTInferenceJobsResponsePrivate::parseListSNOMEDCTInferenceJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSNOMEDCTInferenceJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
