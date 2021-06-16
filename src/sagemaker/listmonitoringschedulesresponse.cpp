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

#include "listmonitoringschedulesresponse.h"
#include "listmonitoringschedulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListMonitoringSchedulesResponse
 * \brief The ListMonitoringSchedulesResponse class provides an interace for SageMaker ListMonitoringSchedules responses.
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
 * \sa SageMakerClient::listMonitoringSchedules
 */

/*!
 * Constructs a ListMonitoringSchedulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListMonitoringSchedulesResponse::ListMonitoringSchedulesResponse(
        const ListMonitoringSchedulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListMonitoringSchedulesResponsePrivate(this), parent)
{
    setRequest(new ListMonitoringSchedulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMonitoringSchedulesRequest * ListMonitoringSchedulesResponse::request() const
{
    Q_D(const ListMonitoringSchedulesResponse);
    return static_cast<const ListMonitoringSchedulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListMonitoringSchedules \a response.
 */
void ListMonitoringSchedulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMonitoringSchedulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListMonitoringSchedulesResponsePrivate
 * \brief The ListMonitoringSchedulesResponsePrivate class provides private implementation for ListMonitoringSchedulesResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListMonitoringSchedulesResponsePrivate object with public implementation \a q.
 */
ListMonitoringSchedulesResponsePrivate::ListMonitoringSchedulesResponsePrivate(
    ListMonitoringSchedulesResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListMonitoringSchedules response element from \a xml.
 */
void ListMonitoringSchedulesResponsePrivate::parseListMonitoringSchedulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMonitoringSchedulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
