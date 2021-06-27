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

#include "listbatchinferencejobsresponse.h"
#include "listbatchinferencejobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListBatchInferenceJobsResponse
 * \brief The ListBatchInferenceJobsResponse class provides an interace for Personalize ListBatchInferenceJobs responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listBatchInferenceJobs
 */

/*!
 * Constructs a ListBatchInferenceJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBatchInferenceJobsResponse::ListBatchInferenceJobsResponse(
        const ListBatchInferenceJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListBatchInferenceJobsResponsePrivate(this), parent)
{
    setRequest(new ListBatchInferenceJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBatchInferenceJobsRequest * ListBatchInferenceJobsResponse::request() const
{
    return static_cast<const ListBatchInferenceJobsRequest *>(PersonalizeResponse::request());
}

/*!
 * \reimp
 * Parses a successful Personalize ListBatchInferenceJobs \a response.
 */
void ListBatchInferenceJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBatchInferenceJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListBatchInferenceJobsResponsePrivate
 * \brief The ListBatchInferenceJobsResponsePrivate class provides private implementation for ListBatchInferenceJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListBatchInferenceJobsResponsePrivate object with public implementation \a q.
 */
ListBatchInferenceJobsResponsePrivate::ListBatchInferenceJobsResponsePrivate(
    ListBatchInferenceJobsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListBatchInferenceJobs response element from \a xml.
 */
void ListBatchInferenceJobsResponsePrivate::parseListBatchInferenceJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBatchInferenceJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
