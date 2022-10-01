// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrouteresponse.h"
#include "getrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::GetRouteResponse
 * \brief The GetRouteResponse class provides an interace for MigrationHubRefactorSpaces GetRoute responses.
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 *
 *  <fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
 * 
 *  This API reference provides descriptions, syntax, and other details about each of the actions and data types for Amazon
 *  Web Services Migration Hub Refactor Spaces (Refactor Spaces). The topic for each action shows the API request parameters
 *  and the response. Alternatively, you can use one of the Amazon Web Services SDKs to access an API that is tailored to
 *  the programming language or platform that you're using. For more information, see <a
 *  href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  To share Refactor Spaces environments with other Amazon Web Services accounts or with Organizations and their OUs, use
 *  Resource Access Manager's <code>CreateResourceShare</code> API. See <a
 *  href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> in the
 *  <i>Amazon Web Services RAM API
 *
 * \sa MigrationHubRefactorSpacesClient::getRoute
 */

/*!
 * Constructs a GetRouteResponse object for \a reply to \a request, with parent \a parent.
 */
GetRouteResponse::GetRouteResponse(
        const GetRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new GetRouteResponsePrivate(this), parent)
{
    setRequest(new GetRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRouteRequest * GetRouteResponse::request() const
{
    Q_D(const GetRouteResponse);
    return static_cast<const GetRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces GetRoute \a response.
 */
void GetRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::GetRouteResponsePrivate
 * \brief The GetRouteResponsePrivate class provides private implementation for GetRouteResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a GetRouteResponsePrivate object with public implementation \a q.
 */
GetRouteResponsePrivate::GetRouteResponsePrivate(
    GetRouteResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces GetRoute response element from \a xml.
 */
void GetRouteResponsePrivate::parseGetRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
