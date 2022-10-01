// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdatasetresponse.h"
#include "createdatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateDatasetResponse
 * \brief The CreateDatasetResponse class provides an interace for Forecast CreateDataset responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createDataset
 */

/*!
 * Constructs a CreateDatasetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatasetResponse::CreateDatasetResponse(
        const CreateDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateDatasetResponsePrivate(this), parent)
{
    setRequest(new CreateDatasetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatasetRequest * CreateDatasetResponse::request() const
{
    Q_D(const CreateDatasetResponse);
    return static_cast<const CreateDatasetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateDataset \a response.
 */
void CreateDatasetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateDatasetResponsePrivate
 * \brief The CreateDatasetResponsePrivate class provides private implementation for CreateDatasetResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateDatasetResponsePrivate object with public implementation \a q.
 */
CreateDatasetResponsePrivate::CreateDatasetResponsePrivate(
    CreateDatasetResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateDataset response element from \a xml.
 */
void CreateDatasetResponsePrivate::parseCreateDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatasetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
