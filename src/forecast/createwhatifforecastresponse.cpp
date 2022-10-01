// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwhatifforecastresponse.h"
#include "createwhatifforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastResponse
 * \brief The CreateWhatIfForecastResponse class provides an interace for Forecast CreateWhatIfForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfForecast
 */

/*!
 * Constructs a CreateWhatIfForecastResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWhatIfForecastResponse::CreateWhatIfForecastResponse(
        const CreateWhatIfForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateWhatIfForecastResponsePrivate(this), parent)
{
    setRequest(new CreateWhatIfForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWhatIfForecastRequest * CreateWhatIfForecastResponse::request() const
{
    Q_D(const CreateWhatIfForecastResponse);
    return static_cast<const CreateWhatIfForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateWhatIfForecast \a response.
 */
void CreateWhatIfForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWhatIfForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateWhatIfForecastResponsePrivate
 * \brief The CreateWhatIfForecastResponsePrivate class provides private implementation for CreateWhatIfForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfForecastResponsePrivate object with public implementation \a q.
 */
CreateWhatIfForecastResponsePrivate::CreateWhatIfForecastResponsePrivate(
    CreateWhatIfForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateWhatIfForecast response element from \a xml.
 */
void CreateWhatIfForecastResponsePrivate::parseCreateWhatIfForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWhatIfForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
