// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemonitorresponse.h"
#include "deletemonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteMonitorResponse
 * \brief The DeleteMonitorResponse class provides an interace for Forecast DeleteMonitor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteMonitor
 */

/*!
 * Constructs a DeleteMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMonitorResponse::DeleteMonitorResponse(
        const DeleteMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteMonitorResponsePrivate(this), parent)
{
    setRequest(new DeleteMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMonitorRequest * DeleteMonitorResponse::request() const
{
    Q_D(const DeleteMonitorResponse);
    return static_cast<const DeleteMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteMonitor \a response.
 */
void DeleteMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteMonitorResponsePrivate
 * \brief The DeleteMonitorResponsePrivate class provides private implementation for DeleteMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteMonitorResponsePrivate object with public implementation \a q.
 */
DeleteMonitorResponsePrivate::DeleteMonitorResponsePrivate(
    DeleteMonitorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteMonitor response element from \a xml.
 */
void DeleteMonitorResponsePrivate::parseDeleteMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
