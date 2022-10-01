// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createforecastresponse.h"
#include "createforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateForecastResponse
 * \brief The CreateForecastResponse class provides an interace for Forecast CreateForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createForecast
 */

/*!
 * Constructs a CreateForecastResponse object for \a reply to \a request, with parent \a parent.
 */
CreateForecastResponse::CreateForecastResponse(
        const CreateForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateForecastResponsePrivate(this), parent)
{
    setRequest(new CreateForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateForecastRequest * CreateForecastResponse::request() const
{
    Q_D(const CreateForecastResponse);
    return static_cast<const CreateForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateForecast \a response.
 */
void CreateForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateForecastResponsePrivate
 * \brief The CreateForecastResponsePrivate class provides private implementation for CreateForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateForecastResponsePrivate object with public implementation \a q.
 */
CreateForecastResponsePrivate::CreateForecastResponsePrivate(
    CreateForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateForecast response element from \a xml.
 */
void CreateForecastResponsePrivate::parseCreateForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
