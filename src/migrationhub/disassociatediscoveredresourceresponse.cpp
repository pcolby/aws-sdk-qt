// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
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
