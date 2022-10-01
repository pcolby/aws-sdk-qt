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

#include "getrouteanalysisresponse.h"
#include "getrouteanalysisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NetworkManager {

/*!
 * \class QtAws::NetworkManager::GetRouteAnalysisResponse
 * \brief The GetRouteAnalysisResponse class provides an interace for NetworkManager GetRouteAnalysis responses.
 *
 * \inmodule QtAwsNetworkManager
 *
 *  Amazon Web Services enables you to centrally manage your Amazon Web Services Cloud WAN core network and your Transit
 *  Gateway network across Amazon Web Services accounts, Regions, and on-premises
 *
 * \sa NetworkManagerClient::getRouteAnalysis
 */

/*!
 * Constructs a GetRouteAnalysisResponse object for \a reply to \a request, with parent \a parent.
 */
GetRouteAnalysisResponse::GetRouteAnalysisResponse(
        const GetRouteAnalysisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NetworkManagerResponse(new GetRouteAnalysisResponsePrivate(this), parent)
{
    setRequest(new GetRouteAnalysisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRouteAnalysisRequest * GetRouteAnalysisResponse::request() const
{
    Q_D(const GetRouteAnalysisResponse);
    return static_cast<const GetRouteAnalysisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NetworkManager GetRouteAnalysis \a response.
 */
void GetRouteAnalysisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRouteAnalysisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NetworkManager::GetRouteAnalysisResponsePrivate
 * \brief The GetRouteAnalysisResponsePrivate class provides private implementation for GetRouteAnalysisResponse.
 * \internal
 *
 * \inmodule QtAwsNetworkManager
 */

/*!
 * Constructs a GetRouteAnalysisResponsePrivate object with public implementation \a q.
 */
GetRouteAnalysisResponsePrivate::GetRouteAnalysisResponsePrivate(
    GetRouteAnalysisResponse * const q) : NetworkManagerResponsePrivate(q)
{

}

/*!
 * Parses a NetworkManager GetRouteAnalysis response element from \a xml.
 */
void GetRouteAnalysisResponsePrivate::parseGetRouteAnalysisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRouteAnalysisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NetworkManager
} // namespace QtAws
