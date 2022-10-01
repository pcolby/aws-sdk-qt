// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtrainingjobsresponse.h"
#include "listtrainingjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTrainingJobsResponse
 * \brief The ListTrainingJobsResponse class provides an interace for SageMaker ListTrainingJobs responses.
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
 * \sa SageMakerClient::listTrainingJobs
 */

/*!
 * Constructs a ListTrainingJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTrainingJobsResponse::ListTrainingJobsResponse(
        const ListTrainingJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTrainingJobsResponsePrivate(this), parent)
{
    setRequest(new ListTrainingJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTrainingJobsRequest * ListTrainingJobsResponse::request() const
{
    Q_D(const ListTrainingJobsResponse);
    return static_cast<const ListTrainingJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTrainingJobs \a response.
 */
void ListTrainingJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTrainingJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTrainingJobsResponsePrivate
 * \brief The ListTrainingJobsResponsePrivate class provides private implementation for ListTrainingJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTrainingJobsResponsePrivate object with public implementation \a q.
 */
ListTrainingJobsResponsePrivate::ListTrainingJobsResponsePrivate(
    ListTrainingJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTrainingJobs response element from \a xml.
 */
void ListTrainingJobsResponsePrivate::parseListTrainingJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTrainingJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
