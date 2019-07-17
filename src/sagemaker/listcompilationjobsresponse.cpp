/*
    Copyright 2013-2019 Paul Colby

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
