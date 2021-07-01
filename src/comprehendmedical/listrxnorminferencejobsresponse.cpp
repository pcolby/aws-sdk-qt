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

#include "listrxnorminferencejobsresponse.h"
#include "listrxnorminferencejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListRxNormInferenceJobsResponse
 * \brief The ListRxNormInferenceJobsResponse class provides an interace for ComprehendMedical ListRxNormInferenceJobs responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::listRxNormInferenceJobs
 */

/*!
 * Constructs a ListRxNormInferenceJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRxNormInferenceJobsResponse::ListRxNormInferenceJobsResponse(
        const ListRxNormInferenceJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new ListRxNormInferenceJobsResponsePrivate(this), parent)
{
    setRequest(new ListRxNormInferenceJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRxNormInferenceJobsRequest * ListRxNormInferenceJobsResponse::request() const
{
    Q_D(const ListRxNormInferenceJobsResponse);
    return static_cast<const ListRxNormInferenceJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical ListRxNormInferenceJobs \a response.
 */
void ListRxNormInferenceJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRxNormInferenceJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::ListRxNormInferenceJobsResponsePrivate
 * \brief The ListRxNormInferenceJobsResponsePrivate class provides private implementation for ListRxNormInferenceJobsResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListRxNormInferenceJobsResponsePrivate object with public implementation \a q.
 */
ListRxNormInferenceJobsResponsePrivate::ListRxNormInferenceJobsResponsePrivate(
    ListRxNormInferenceJobsResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical ListRxNormInferenceJobs response element from \a xml.
 */
void ListRxNormInferenceJobsResponsePrivate::parseListRxNormInferenceJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRxNormInferenceJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
