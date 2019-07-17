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

#include "listhyperparametertuningjobsresponse.h"
#include "listhyperparametertuningjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsResponse
 * \brief The ListHyperParameterTuningJobsResponse class provides an interace for SageMaker ListHyperParameterTuningJobs responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::listHyperParameterTuningJobs
 */

/*!
 * Constructs a ListHyperParameterTuningJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHyperParameterTuningJobsResponse::ListHyperParameterTuningJobsResponse(
        const ListHyperParameterTuningJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListHyperParameterTuningJobsResponsePrivate(this), parent)
{
    setRequest(new ListHyperParameterTuningJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHyperParameterTuningJobsRequest * ListHyperParameterTuningJobsResponse::request() const
{
    Q_D(const ListHyperParameterTuningJobsResponse);
    return static_cast<const ListHyperParameterTuningJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListHyperParameterTuningJobs \a response.
 */
void ListHyperParameterTuningJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHyperParameterTuningJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListHyperParameterTuningJobsResponsePrivate
 * \brief The ListHyperParameterTuningJobsResponsePrivate class provides private implementation for ListHyperParameterTuningJobsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListHyperParameterTuningJobsResponsePrivate object with public implementation \a q.
 */
ListHyperParameterTuningJobsResponsePrivate::ListHyperParameterTuningJobsResponsePrivate(
    ListHyperParameterTuningJobsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListHyperParameterTuningJobs response element from \a xml.
 */
void ListHyperParameterTuningJobsResponsePrivate::parseListHyperParameterTuningJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHyperParameterTuningJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
