// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatecreatedartifactresponse.h"
#include "associatecreatedartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::AssociateCreatedArtifactResponse
 * \brief The AssociateCreatedArtifactResponse class provides an interace for MigrationHub AssociateCreatedArtifact responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::associateCreatedArtifact
 */

/*!
 * Constructs a AssociateCreatedArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateCreatedArtifactResponse::AssociateCreatedArtifactResponse(
        const AssociateCreatedArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new AssociateCreatedArtifactResponsePrivate(this), parent)
{
    setRequest(new AssociateCreatedArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateCreatedArtifactRequest * AssociateCreatedArtifactResponse::request() const
{
    Q_D(const AssociateCreatedArtifactResponse);
    return static_cast<const AssociateCreatedArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub AssociateCreatedArtifact \a response.
 */
void AssociateCreatedArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateCreatedArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::AssociateCreatedArtifactResponsePrivate
 * \brief The AssociateCreatedArtifactResponsePrivate class provides private implementation for AssociateCreatedArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a AssociateCreatedArtifactResponsePrivate object with public implementation \a q.
 */
AssociateCreatedArtifactResponsePrivate::AssociateCreatedArtifactResponsePrivate(
    AssociateCreatedArtifactResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub AssociateCreatedArtifact response element from \a xml.
 */
void AssociateCreatedArtifactResponsePrivate::parseAssociateCreatedArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateCreatedArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
