// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepredictorresponse.h"
#include "deletepredictorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeletePredictorResponse
 * \brief The DeletePredictorResponse class provides an interace for Forecast DeletePredictor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deletePredictor
 */

/*!
 * Constructs a DeletePredictorResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePredictorResponse::DeletePredictorResponse(
        const DeletePredictorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeletePredictorResponsePrivate(this), parent)
{
    setRequest(new DeletePredictorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePredictorRequest * DeletePredictorResponse::request() const
{
    Q_D(const DeletePredictorResponse);
    return static_cast<const DeletePredictorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeletePredictor \a response.
 */
void DeletePredictorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePredictorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeletePredictorResponsePrivate
 * \brief The DeletePredictorResponsePrivate class provides private implementation for DeletePredictorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeletePredictorResponsePrivate object with public implementation \a q.
 */
DeletePredictorResponsePrivate::DeletePredictorResponsePrivate(
    DeletePredictorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeletePredictor response element from \a xml.
 */
void DeletePredictorResponsePrivate::parseDeletePredictorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePredictorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
