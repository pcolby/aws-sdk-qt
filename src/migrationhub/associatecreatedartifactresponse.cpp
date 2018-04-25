/*
    Copyright 2013-2018 Paul Colby

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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
    Q_D(AssociateCreatedArtifactResponse);
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
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
