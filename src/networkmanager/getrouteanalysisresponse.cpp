// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
