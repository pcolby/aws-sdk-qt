// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbatchsegmentjobsresponse.h"
#include "listbatchsegmentjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsResponse
 * \brief The ListBatchSegmentJobsResponse class provides an interace for Personalize ListBatchSegmentJobs responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listBatchSegmentJobs
 */

/*!
 * Constructs a ListBatchSegmentJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBatchSegmentJobsResponse::ListBatchSegmentJobsResponse(
        const ListBatchSegmentJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListBatchSegmentJobsResponsePrivate(this), parent)
{
    setRequest(new ListBatchSegmentJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBatchSegmentJobsRequest * ListBatchSegmentJobsResponse::request() const
{
    Q_D(const ListBatchSegmentJobsResponse);
    return static_cast<const ListBatchSegmentJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListBatchSegmentJobs \a response.
 */
void ListBatchSegmentJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBatchSegmentJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsResponsePrivate
 * \brief The ListBatchSegmentJobsResponsePrivate class provides private implementation for ListBatchSegmentJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListBatchSegmentJobsResponsePrivate object with public implementation \a q.
 */
ListBatchSegmentJobsResponsePrivate::ListBatchSegmentJobsResponsePrivate(
    ListBatchSegmentJobsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListBatchSegmentJobs response element from \a xml.
 */
void ListBatchSegmentJobsResponsePrivate::parseListBatchSegmentJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBatchSegmentJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
