// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlabelingjobsresponse.h"
#include "listlabelingjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListLabelingJobsResponse
 * \brief The ListLabelingJobsResponse class provides an interace for SageMaker ListLabelingJobs responses.
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
 * \sa SageMakerClient::listLabelingJobs
 */

/*!
 * Constructs a ListLabelingJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLabelingJobsResponse::ListLabelingJobsResponse(
        const ListLabelingJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListLabelingJobsResponsePrivate(this), parent)
{
    setRequest(new ListLabelingJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLabelingJobsRequest * ListLabelingJobsResponse::request() const
{
    Q_D(const ListLabelingJobsResponse);
    return static_cast<const ListLabelingJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListLabelingJobs \a response.
 */
void ListLabelingJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLabelingJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListLabelingJobsResponsePrivate
 * \brief The ListLabelingJobsResponsePrivate class provides private implementation for ListLabelingJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListLabelingJobsResponsePrivate object with public implementation \a q.
 */
ListLabelingJobsResponsePrivate::ListLabelingJobsResponsePrivate(
    ListLabelingJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListLabelingJobs response element from \a xml.
 */
void ListLabelingJobsResponsePrivate::parseListLabelingJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLabelingJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
