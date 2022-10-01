// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmonitorsresponse.h"
#include "listmonitorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListMonitorsResponse
 * \brief The ListMonitorsResponse class provides an interace for Forecast ListMonitors responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listMonitors
 */

/*!
 * Constructs a ListMonitorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMonitorsResponse::ListMonitorsResponse(
        const ListMonitorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListMonitorsResponsePrivate(this), parent)
{
    setRequest(new ListMonitorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMonitorsRequest * ListMonitorsResponse::request() const
{
    Q_D(const ListMonitorsResponse);
    return static_cast<const ListMonitorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListMonitors \a response.
 */
void ListMonitorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMonitorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListMonitorsResponsePrivate
 * \brief The ListMonitorsResponsePrivate class provides private implementation for ListMonitorsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListMonitorsResponsePrivate object with public implementation \a q.
 */
ListMonitorsResponsePrivate::ListMonitorsResponsePrivate(
    ListMonitorsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListMonitors response element from \a xml.
 */
void ListMonitorsResponsePrivate::parseListMonitorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMonitorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
