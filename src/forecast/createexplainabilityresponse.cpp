// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexplainabilityresponse.h"
#include "createexplainabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateExplainabilityResponse
 * \brief The CreateExplainabilityResponse class provides an interace for Forecast CreateExplainability responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createExplainability
 */

/*!
 * Constructs a CreateExplainabilityResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExplainabilityResponse::CreateExplainabilityResponse(
        const CreateExplainabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateExplainabilityResponsePrivate(this), parent)
{
    setRequest(new CreateExplainabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExplainabilityRequest * CreateExplainabilityResponse::request() const
{
    Q_D(const CreateExplainabilityResponse);
    return static_cast<const CreateExplainabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateExplainability \a response.
 */
void CreateExplainabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExplainabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateExplainabilityResponsePrivate
 * \brief The CreateExplainabilityResponsePrivate class provides private implementation for CreateExplainabilityResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateExplainabilityResponsePrivate object with public implementation \a q.
 */
CreateExplainabilityResponsePrivate::CreateExplainabilityResponsePrivate(
    CreateExplainabilityResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateExplainability response element from \a xml.
 */
void CreateExplainabilityResponsePrivate::parseCreateExplainabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExplainabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
