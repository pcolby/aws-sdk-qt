// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterouteresponse.h"
#include "updaterouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::UpdateRouteResponse
 * \brief The UpdateRouteResponse class provides an interace for MigrationHubRefactorSpaces UpdateRoute responses.
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
 * \sa MigrationHubRefactorSpacesClient::updateRoute
 */

/*!
 * Constructs a UpdateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRouteResponse::UpdateRouteResponse(
        const UpdateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new UpdateRouteResponsePrivate(this), parent)
{
    setRequest(new UpdateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRouteRequest * UpdateRouteResponse::request() const
{
    Q_D(const UpdateRouteResponse);
    return static_cast<const UpdateRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces UpdateRoute \a response.
 */
void UpdateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::UpdateRouteResponsePrivate
 * \brief The UpdateRouteResponsePrivate class provides private implementation for UpdateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a UpdateRouteResponsePrivate object with public implementation \a q.
 */
UpdateRouteResponsePrivate::UpdateRouteResponsePrivate(
    UpdateRouteResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces UpdateRoute response element from \a xml.
 */
void UpdateRouteResponsePrivate::parseUpdateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
