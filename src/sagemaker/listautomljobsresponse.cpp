// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listautomljobsresponse.h"
#include "listautomljobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListAutoMLJobsResponse
 * \brief The ListAutoMLJobsResponse class provides an interace for SageMaker ListAutoMLJobs responses.
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
 * \sa SageMakerClient::listAutoMLJobs
 */

/*!
 * Constructs a ListAutoMLJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAutoMLJobsResponse::ListAutoMLJobsResponse(
        const ListAutoMLJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListAutoMLJobsResponsePrivate(this), parent)
{
    setRequest(new ListAutoMLJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAutoMLJobsRequest * ListAutoMLJobsResponse::request() const
{
    Q_D(const ListAutoMLJobsResponse);
    return static_cast<const ListAutoMLJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListAutoMLJobs \a response.
 */
void ListAutoMLJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAutoMLJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListAutoMLJobsResponsePrivate
 * \brief The ListAutoMLJobsResponsePrivate class provides private implementation for ListAutoMLJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListAutoMLJobsResponsePrivate object with public implementation \a q.
 */
ListAutoMLJobsResponsePrivate::ListAutoMLJobsResponsePrivate(
    ListAutoMLJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListAutoMLJobs response element from \a xml.
 */
void ListAutoMLJobsResponsePrivate::parseListAutoMLJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAutoMLJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
