// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrouteresponse.h"
#include "createrouteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateRouteResponse
 * \brief The CreateRouteResponse class provides an interace for MigrationHubRefactorSpaces CreateRoute responses.
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
 * \sa MigrationHubRefactorSpacesClient::createRoute
 */

/*!
 * Constructs a CreateRouteResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRouteResponse::CreateRouteResponse(
        const CreateRouteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new CreateRouteResponsePrivate(this), parent)
{
    setRequest(new CreateRouteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRouteRequest * CreateRouteResponse::request() const
{
    Q_D(const CreateRouteResponse);
    return static_cast<const CreateRouteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces CreateRoute \a response.
 */
void CreateRouteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRouteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::CreateRouteResponsePrivate
 * \brief The CreateRouteResponsePrivate class provides private implementation for CreateRouteResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a CreateRouteResponsePrivate object with public implementation \a q.
 */
CreateRouteResponsePrivate::CreateRouteResponsePrivate(
    CreateRouteResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces CreateRoute response element from \a xml.
 */
void CreateRouteResponsePrivate::parseCreateRouteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRouteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
