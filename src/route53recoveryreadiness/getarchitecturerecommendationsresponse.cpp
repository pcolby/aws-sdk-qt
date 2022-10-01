// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getarchitecturerecommendationsresponse.h"
#include "getarchitecturerecommendationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::GetArchitectureRecommendationsResponse
 * \brief The GetArchitectureRecommendationsResponse class provides an interace for Route53RecoveryReadiness GetArchitectureRecommendations responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::getArchitectureRecommendations
 */

/*!
 * Constructs a GetArchitectureRecommendationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetArchitectureRecommendationsResponse::GetArchitectureRecommendationsResponse(
        const GetArchitectureRecommendationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new GetArchitectureRecommendationsResponsePrivate(this), parent)
{
    setRequest(new GetArchitectureRecommendationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetArchitectureRecommendationsRequest * GetArchitectureRecommendationsResponse::request() const
{
    Q_D(const GetArchitectureRecommendationsResponse);
    return static_cast<const GetArchitectureRecommendationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness GetArchitectureRecommendations \a response.
 */
void GetArchitectureRecommendationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetArchitectureRecommendationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::GetArchitectureRecommendationsResponsePrivate
 * \brief The GetArchitectureRecommendationsResponsePrivate class provides private implementation for GetArchitectureRecommendationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a GetArchitectureRecommendationsResponsePrivate object with public implementation \a q.
 */
GetArchitectureRecommendationsResponsePrivate::GetArchitectureRecommendationsResponsePrivate(
    GetArchitectureRecommendationsResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness GetArchitectureRecommendations response element from \a xml.
 */
void GetArchitectureRecommendationsResponsePrivate::parseGetArchitectureRecommendationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetArchitectureRecommendationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
