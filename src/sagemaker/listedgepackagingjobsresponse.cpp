// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listedgepackagingjobsresponse.h"
#include "listedgepackagingjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListEdgePackagingJobsResponse
 * \brief The ListEdgePackagingJobsResponse class provides an interace for SageMaker ListEdgePackagingJobs responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listEdgePackagingJobs
 */

/*!
 * Constructs a ListEdgePackagingJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEdgePackagingJobsResponse::ListEdgePackagingJobsResponse(
        const ListEdgePackagingJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListEdgePackagingJobsResponsePrivate(this), parent)
{
    setRequest(new ListEdgePackagingJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEdgePackagingJobsRequest * ListEdgePackagingJobsResponse::request() const
{
    Q_D(const ListEdgePackagingJobsResponse);
    return static_cast<const ListEdgePackagingJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListEdgePackagingJobs \a response.
 */
void ListEdgePackagingJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEdgePackagingJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListEdgePackagingJobsResponsePrivate
 * \brief The ListEdgePackagingJobsResponsePrivate class provides private implementation for ListEdgePackagingJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListEdgePackagingJobsResponsePrivate object with public implementation \a q.
 */
ListEdgePackagingJobsResponsePrivate::ListEdgePackagingJobsResponsePrivate(
    ListEdgePackagingJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListEdgePackagingJobs response element from \a xml.
 */
void ListEdgePackagingJobsResponsePrivate::parseListEdgePackagingJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEdgePackagingJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
