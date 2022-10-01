// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteforecastresponse.h"
#include "deleteforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteForecastResponse
 * \brief The DeleteForecastResponse class provides an interace for Forecast DeleteForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteForecast
 */

/*!
 * Constructs a DeleteForecastResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteForecastResponse::DeleteForecastResponse(
        const DeleteForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteForecastResponsePrivate(this), parent)
{
    setRequest(new DeleteForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteForecastRequest * DeleteForecastResponse::request() const
{
    Q_D(const DeleteForecastResponse);
    return static_cast<const DeleteForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteForecast \a response.
 */
void DeleteForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteForecastResponsePrivate
 * \brief The DeleteForecastResponsePrivate class provides private implementation for DeleteForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteForecastResponsePrivate object with public implementation \a q.
 */
DeleteForecastResponsePrivate::DeleteForecastResponsePrivate(
    DeleteForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteForecast response element from \a xml.
 */
void DeleteForecastResponsePrivate::parseDeleteForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
