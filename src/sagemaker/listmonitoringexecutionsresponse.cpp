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

#include "listmonitoringexecutionsresponse.h"
#include "listmonitoringexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListMonitoringExecutionsResponse
 * \brief The ListMonitoringExecutionsResponse class provides an interace for SageMaker ListMonitoringExecutions responses.
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
 * \sa SageMakerClient::listMonitoringExecutions
 */

/*!
 * Constructs a ListMonitoringExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMonitoringExecutionsResponse::ListMonitoringExecutionsResponse(
        const ListMonitoringExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListMonitoringExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListMonitoringExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMonitoringExecutionsRequest * ListMonitoringExecutionsResponse::request() const
{
    Q_D(const ListMonitoringExecutionsResponse);
    return static_cast<const ListMonitoringExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListMonitoringExecutions \a response.
 */
void ListMonitoringExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMonitoringExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListMonitoringExecutionsResponsePrivate
 * \brief The ListMonitoringExecutionsResponsePrivate class provides private implementation for ListMonitoringExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListMonitoringExecutionsResponsePrivate object with public implementation \a q.
 */
ListMonitoringExecutionsResponsePrivate::ListMonitoringExecutionsResponsePrivate(
    ListMonitoringExecutionsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListMonitoringExecutions response element from \a xml.
 */
void ListMonitoringExecutionsResponsePrivate::parseListMonitoringExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMonitoringExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
