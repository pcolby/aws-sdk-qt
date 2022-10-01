// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteenvironmentresponse.h"
#include "deleteenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHubRefactorSpaces {

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteEnvironmentResponse
 * \brief The DeleteEnvironmentResponse class provides an interace for MigrationHubRefactorSpaces DeleteEnvironment responses.
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
 * \sa MigrationHubRefactorSpacesClient::deleteEnvironment
 */

/*!
 * Constructs a DeleteEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEnvironmentResponse::DeleteEnvironmentResponse(
        const DeleteEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubRefactorSpacesResponse(new DeleteEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEnvironmentRequest * DeleteEnvironmentResponse::request() const
{
    Q_D(const DeleteEnvironmentResponse);
    return static_cast<const DeleteEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHubRefactorSpaces DeleteEnvironment \a response.
 */
void DeleteEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHubRefactorSpaces::DeleteEnvironmentResponsePrivate
 * \brief The DeleteEnvironmentResponsePrivate class provides private implementation for DeleteEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHubRefactorSpaces
 */

/*!
 * Constructs a DeleteEnvironmentResponsePrivate object with public implementation \a q.
 */
DeleteEnvironmentResponsePrivate::DeleteEnvironmentResponsePrivate(
    DeleteEnvironmentResponse * const q) : MigrationHubRefactorSpacesResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHubRefactorSpaces DeleteEnvironment response element from \a xml.
 */
void DeleteEnvironmentResponsePrivate::parseDeleteEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws
