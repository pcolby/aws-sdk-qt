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

#include "disassociatecreatedartifactresponse.h"
#include "disassociatecreatedartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DisassociateCreatedArtifactResponse
 * \brief The DisassociateCreatedArtifactResponse class provides an interace for MigrationHub DisassociateCreatedArtifact responses.
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
 * \sa MigrationHubClient::disassociateCreatedArtifact
 */

/*!
 * Constructs a DisassociateCreatedArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateCreatedArtifactResponse::DisassociateCreatedArtifactResponse(
        const DisassociateCreatedArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DisassociateCreatedArtifactResponsePrivate(this), parent)
{
    setRequest(new DisassociateCreatedArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateCreatedArtifactRequest * DisassociateCreatedArtifactResponse::request() const
{
    return static_cast<const DisassociateCreatedArtifactRequest *>(MigrationHubResponse::request());
}

/*!
 * \reimp
 * Parses a successful MigrationHub DisassociateCreatedArtifact \a response.
 */
void DisassociateCreatedArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateCreatedArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::DisassociateCreatedArtifactResponsePrivate
 * \brief The DisassociateCreatedArtifactResponsePrivate class provides private implementation for DisassociateCreatedArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DisassociateCreatedArtifactResponsePrivate object with public implementation \a q.
 */
DisassociateCreatedArtifactResponsePrivate::DisassociateCreatedArtifactResponsePrivate(
    DisassociateCreatedArtifactResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub DisassociateCreatedArtifact response element from \a xml.
 */
void DisassociateCreatedArtifactResponsePrivate::parseDisassociateCreatedArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateCreatedArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
