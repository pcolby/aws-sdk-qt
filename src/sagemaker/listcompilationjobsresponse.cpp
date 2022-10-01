// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcompilationjobsresponse.h"
#include "listcompilationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListCompilationJobsResponse
 * \brief The ListCompilationJobsResponse class provides an interace for SageMaker ListCompilationJobs responses.
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
 * \sa SageMakerClient::listCompilationJobs
 */

/*!
 * Constructs a ListCompilationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCompilationJobsResponse::ListCompilationJobsResponse(
        const ListCompilationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListCompilationJobsResponsePrivate(this), parent)
{
    setRequest(new ListCompilationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCompilationJobsRequest * ListCompilationJobsResponse::request() const
{
    Q_D(const ListCompilationJobsResponse);
    return static_cast<const ListCompilationJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListCompilationJobs \a response.
 */
void ListCompilationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCompilationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListCompilationJobsResponsePrivate
 * \brief The ListCompilationJobsResponsePrivate class provides private implementation for ListCompilationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListCompilationJobsResponsePrivate object with public implementation \a q.
 */
ListCompilationJobsResponsePrivate::ListCompilationJobsResponsePrivate(
    ListCompilationJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListCompilationJobs response element from \a xml.
 */
void ListCompilationJobsResponsePrivate::parseListCompilationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCompilationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
