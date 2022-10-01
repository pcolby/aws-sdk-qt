// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
