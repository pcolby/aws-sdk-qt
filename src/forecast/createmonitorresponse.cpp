// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmonitorresponse.h"
#include "createmonitorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateMonitorResponse
 * \brief The CreateMonitorResponse class provides an interace for Forecast CreateMonitor responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createMonitor
 */

/*!
 * Constructs a CreateMonitorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMonitorResponse::CreateMonitorResponse(
        const CreateMonitorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new CreateMonitorResponsePrivate(this), parent)
{
    setRequest(new CreateMonitorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMonitorRequest * CreateMonitorResponse::request() const
{
    Q_D(const CreateMonitorResponse);
    return static_cast<const CreateMonitorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast CreateMonitor \a response.
 */
void CreateMonitorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMonitorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::CreateMonitorResponsePrivate
 * \brief The CreateMonitorResponsePrivate class provides private implementation for CreateMonitorResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateMonitorResponsePrivate object with public implementation \a q.
 */
CreateMonitorResponsePrivate::CreateMonitorResponsePrivate(
    CreateMonitorResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast CreateMonitor response element from \a xml.
 */
void CreateMonitorResponsePrivate::parseCreateMonitorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMonitorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
