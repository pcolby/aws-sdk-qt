// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtransformjobsresponse.h"
#include "listtransformjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListTransformJobsResponse
 * \brief The ListTransformJobsResponse class provides an interace for SageMaker ListTransformJobs responses.
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
 * \sa SageMakerClient::listTransformJobs
 */

/*!
 * Constructs a ListTransformJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTransformJobsResponse::ListTransformJobsResponse(
        const ListTransformJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListTransformJobsResponsePrivate(this), parent)
{
    setRequest(new ListTransformJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTransformJobsRequest * ListTransformJobsResponse::request() const
{
    Q_D(const ListTransformJobsResponse);
    return static_cast<const ListTransformJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListTransformJobs \a response.
 */
void ListTransformJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTransformJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListTransformJobsResponsePrivate
 * \brief The ListTransformJobsResponsePrivate class provides private implementation for ListTransformJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListTransformJobsResponsePrivate object with public implementation \a q.
 */
ListTransformJobsResponsePrivate::ListTransformJobsResponsePrivate(
    ListTransformJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListTransformJobs response element from \a xml.
 */
void ListTransformJobsResponsePrivate::parseListTransformJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTransformJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
