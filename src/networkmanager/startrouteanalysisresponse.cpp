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

#include "startrouteanalysisresponse.h"
#include "startrouteanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::StartRouteAnalysisResponse
 * \brief The StartRouteAnalysisResponse class provides an interace for NetworkManager StartRouteAnalysis responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::startRouteAnalysis
 */

/*!
 * Constructs a StartRouteAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
StartRouteAnalysisResponse::StartRouteAnalysisResponse(
        const StartRouteAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new StartRouteAnalysisResponsePrivate(this), parent)
{
    setRequest(new StartRouteAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartRouteAnalysisRequest * StartRouteAnalysisResponse::request() const
{
    Q_D(const StartRouteAnalysisResponse);
    return static_cast<const StartRouteAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager StartRouteAnalysis \a response.
 */
void StartRouteAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartRouteAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::StartRouteAnalysisResponsePrivate
 * \brief The StartRouteAnalysisResponsePrivate class provides private implementation for StartRouteAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a StartRouteAnalysisResponsePrivate object with public implementation \a q.
 */
StartRouteAnalysisResponsePrivate::StartRouteAnalysisResponsePrivate(
    StartRouteAnalysisResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager StartRouteAnalysis response element from \a xml.
 */
void StartRouteAnalysisResponsePrivate::parseStartRouteAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartRouteAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
