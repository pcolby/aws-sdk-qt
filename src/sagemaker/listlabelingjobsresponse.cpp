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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
