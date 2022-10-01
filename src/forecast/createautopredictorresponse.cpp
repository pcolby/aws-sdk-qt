// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createautopredictorresponse.h"
#include "createautopredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateAutoPredictorResponse
 * \brief The CreateAutoPredictorResponse class provides an interace for Forecast CreateAutoPredictor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createAutoPredictor
 */

/*!
 * Constructs a CreateAutoPredictorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAutoPredictorResponse::CreateAutoPredictorResponse(
        const CreateAutoPredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateAutoPredictorResponsePrivate(this), parent)
{
    setRequest(new CreateAutoPredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAutoPredictorRequest * CreateAutoPredictorResponse::request() const
{
    Q_D(const CreateAutoPredictorResponse);
    return static_cast<const CreateAutoPredictorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateAutoPredictor \a response.
 */
void CreateAutoPredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAutoPredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateAutoPredictorResponsePrivate
 * \brief The CreateAutoPredictorResponsePrivate class provides private implementation for CreateAutoPredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateAutoPredictorResponsePrivate object with public implementation \a q.
 */
CreateAutoPredictorResponsePrivate::CreateAutoPredictorResponsePrivate(
    CreateAutoPredictorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateAutoPredictor response element from \a xml.
 */
void CreateAutoPredictorResponsePrivate::parseCreateAutoPredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAutoPredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
