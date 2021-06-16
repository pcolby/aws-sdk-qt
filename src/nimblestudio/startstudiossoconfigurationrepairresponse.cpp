/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "startstudiossoconfigurationrepairresponse.h"
#include "startstudiossoconfigurationrepairresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::StartStudioSSOConfigurationRepairResponse
 * \brief The StartStudioSSOConfigurationRepairResponse class provides an interace for NimbleStudio StartStudioSSOConfigurationRepair responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::startStudioSSOConfigurationRepair
 */

/*!
 * Constructs a StartStudioSSOConfigurationRepairResponse object for \a reply to \a request, with parent \a parent.
 */
StartStudioSSOConfigurationRepairResponse::StartStudioSSOConfigurationRepairResponse(
        const StartStudioSSOConfigurationRepairRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new StartStudioSSOConfigurationRepairResponsePrivate(this), parent)
{
    setRequest(new StartStudioSSOConfigurationRepairRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartStudioSSOConfigurationRepairRequest * StartStudioSSOConfigurationRepairResponse::request() const
{
    Q_D(const StartStudioSSOConfigurationRepairResponse);
    return static_cast<const StartStudioSSOConfigurationRepairRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio StartStudioSSOConfigurationRepair \a response.
 */
void StartStudioSSOConfigurationRepairResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartStudioSSOConfigurationRepairResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::StartStudioSSOConfigurationRepairResponsePrivate
 * \brief The StartStudioSSOConfigurationRepairResponsePrivate class provides private implementation for StartStudioSSOConfigurationRepairResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a StartStudioSSOConfigurationRepairResponsePrivate object with public implementation \a q.
 */
StartStudioSSOConfigurationRepairResponsePrivate::StartStudioSSOConfigurationRepairResponsePrivate(
    StartStudioSSOConfigurationRepairResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio StartStudioSSOConfigurationRepair response element from \a xml.
 */
void StartStudioSSOConfigurationRepairResponsePrivate::parseStartStudioSSOConfigurationRepairResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartStudioSSOConfigurationRepairResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
