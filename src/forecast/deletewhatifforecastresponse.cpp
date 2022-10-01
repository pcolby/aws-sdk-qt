// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewhatifforecastresponse.h"
#include "deletewhatifforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastResponse
 * \brief The DeleteWhatIfForecastResponse class provides an interace for Forecast DeleteWhatIfForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWhatIfForecastResponse::DeleteWhatIfForecastResponse(
        const DeleteWhatIfForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteWhatIfForecastResponsePrivate(this), parent)
{
    setRequest(new DeleteWhatIfForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWhatIfForecastRequest * DeleteWhatIfForecastResponse::request() const
{
    Q_D(const DeleteWhatIfForecastResponse);
    return static_cast<const DeleteWhatIfForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteWhatIfForecast \a response.
 */
void DeleteWhatIfForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWhatIfForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastResponsePrivate
 * \brief The DeleteWhatIfForecastResponsePrivate class provides private implementation for DeleteWhatIfForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastResponsePrivate object with public implementation \a q.
 */
DeleteWhatIfForecastResponsePrivate::DeleteWhatIfForecastResponsePrivate(
    DeleteWhatIfForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteWhatIfForecast response element from \a xml.
 */
void DeleteWhatIfForecastResponsePrivate::parseDeleteWhatIfForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWhatIfForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
