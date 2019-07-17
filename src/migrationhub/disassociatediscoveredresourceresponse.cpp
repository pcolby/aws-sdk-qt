/*
    Copyright 2013-2019 Paul Colby

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

#include "disassociatediscoveredresourceresponse.h"
#include "disassociatediscoveredresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DisassociateDiscoveredResourceResponse
 * \brief The DisassociateDiscoveredResourceResponse class provides an interace for MigrationHub DisassociateDiscoveredResource responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::disassociateDiscoveredResource
 */

/*!
 * Constructs a DisassociateDiscoveredResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateDiscoveredResourceResponse::DisassociateDiscoveredResourceResponse(
        const DisassociateDiscoveredResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DisassociateDiscoveredResourceResponsePrivate(this), parent)
{
    setRequest(new DisassociateDiscoveredResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateDiscoveredResourceRequest * DisassociateDiscoveredResourceResponse::request() const
{
    Q_D(const DisassociateDiscoveredResourceResponse);
    return static_cast<const DisassociateDiscoveredResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MigrationHub DisassociateDiscoveredResource \a response.
 */
void DisassociateDiscoveredResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateDiscoveredResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::DisassociateDiscoveredResourceResponsePrivate
 * \brief The DisassociateDiscoveredResourceResponsePrivate class provides private implementation for DisassociateDiscoveredResourceResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DisassociateDiscoveredResourceResponsePrivate object with public implementation \a q.
 */
DisassociateDiscoveredResourceResponsePrivate::DisassociateDiscoveredResourceResponsePrivate(
    DisassociateDiscoveredResourceResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub DisassociateDiscoveredResource response element from \a xml.
 */
void DisassociateDiscoveredResourceResponsePrivate::parseDisassociateDiscoveredResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateDiscoveredResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
