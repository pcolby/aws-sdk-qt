// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const ListBatchInferenceJobsResponse);
    return static_cast<const ListBatchInferenceJobsRequest *>(d->request);
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
