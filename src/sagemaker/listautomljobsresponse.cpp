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
