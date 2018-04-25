/*
    Copyright 2013-2018 Paul Colby

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
    Q_D(ListTrainingJobsResponse);
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
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
