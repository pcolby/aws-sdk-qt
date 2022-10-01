// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprocessingjobsresponse.h"
#include "listprocessingjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListProcessingJobsResponse
 * \brief The ListProcessingJobsResponse class provides an interace for SageMaker ListProcessingJobs responses.
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
 * \sa SageMakerClient::listProcessingJobs
 */

/*!
 * Constructs a ListProcessingJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProcessingJobsResponse::ListProcessingJobsResponse(
        const ListProcessingJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListProcessingJobsResponsePrivate(this), parent)
{
    setRequest(new ListProcessingJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProcessingJobsRequest * ListProcessingJobsResponse::request() const
{
    Q_D(const ListProcessingJobsResponse);
    return static_cast<const ListProcessingJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListProcessingJobs \a response.
 */
void ListProcessingJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProcessingJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListProcessingJobsResponsePrivate
 * \brief The ListProcessingJobsResponsePrivate class provides private implementation for ListProcessingJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListProcessingJobsResponsePrivate object with public implementation \a q.
 */
ListProcessingJobsResponsePrivate::ListProcessingJobsResponsePrivate(
    ListProcessingJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListProcessingJobs response element from \a xml.
 */
void ListProcessingJobsResponsePrivate::parseListProcessingJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProcessingJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
