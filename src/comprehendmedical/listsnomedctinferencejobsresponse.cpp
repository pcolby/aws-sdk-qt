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
