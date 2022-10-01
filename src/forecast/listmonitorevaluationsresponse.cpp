// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmonitorevaluationsresponse.h"
#include "listmonitorevaluationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListMonitorEvaluationsResponse
 * \brief The ListMonitorEvaluationsResponse class provides an interace for Forecast ListMonitorEvaluations responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listMonitorEvaluations
 */

/*!
 * Constructs a ListMonitorEvaluationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMonitorEvaluationsResponse::ListMonitorEvaluationsResponse(
        const ListMonitorEvaluationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListMonitorEvaluationsResponsePrivate(this), parent)
{
    setRequest(new ListMonitorEvaluationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMonitorEvaluationsRequest * ListMonitorEvaluationsResponse::request() const
{
    Q_D(const ListMonitorEvaluationsResponse);
    return static_cast<const ListMonitorEvaluationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListMonitorEvaluations \a response.
 */
void ListMonitorEvaluationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMonitorEvaluationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListMonitorEvaluationsResponsePrivate
 * \brief The ListMonitorEvaluationsResponsePrivate class provides private implementation for ListMonitorEvaluationsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListMonitorEvaluationsResponsePrivate object with public implementation \a q.
 */
ListMonitorEvaluationsResponsePrivate::ListMonitorEvaluationsResponsePrivate(
    ListMonitorEvaluationsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListMonitorEvaluations response element from \a xml.
 */
void ListMonitorEvaluationsResponsePrivate::parseListMonitorEvaluationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMonitorEvaluationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
