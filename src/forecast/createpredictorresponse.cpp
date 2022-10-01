// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpredictorresponse.h"
#include "createpredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreatePredictorResponse
 * \brief The CreatePredictorResponse class provides an interace for Forecast CreatePredictor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createPredictor
 */

/*!
 * Constructs a CreatePredictorResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePredictorResponse::CreatePredictorResponse(
        const CreatePredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreatePredictorResponsePrivate(this), parent)
{
    setRequest(new CreatePredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePredictorRequest * CreatePredictorResponse::request() const
{
    Q_D(const CreatePredictorResponse);
    return static_cast<const CreatePredictorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreatePredictor \a response.
 */
void CreatePredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreatePredictorResponsePrivate
 * \brief The CreatePredictorResponsePrivate class provides private implementation for CreatePredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreatePredictorResponsePrivate object with public implementation \a q.
 */
CreatePredictorResponsePrivate::CreatePredictorResponsePrivate(
    CreatePredictorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreatePredictor response element from \a xml.
 */
void CreatePredictorResponsePrivate::parseCreatePredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
