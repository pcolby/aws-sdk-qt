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

#include "disassociateserviceactionfromprovisioningartifactresponse.h"
#include "disassociateserviceactionfromprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DisassociateServiceActionFromProvisioningArtifactResponse
 * \brief The DisassociateServiceActionFromProvisioningArtifactResponse class provides an interace for ServiceCatalog DisassociateServiceActionFromProvisioningArtifact responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::disassociateServiceActionFromProvisioningArtifact
 */

/*!
 * Constructs a DisassociateServiceActionFromProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateServiceActionFromProvisioningArtifactResponse::DisassociateServiceActionFromProvisioningArtifactResponse(
        const DisassociateServiceActionFromProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DisassociateServiceActionFromProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new DisassociateServiceActionFromProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateServiceActionFromProvisioningArtifactRequest * DisassociateServiceActionFromProvisioningArtifactResponse::request() const
{
    Q_D(const DisassociateServiceActionFromProvisioningArtifactResponse);
    return static_cast<const DisassociateServiceActionFromProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DisassociateServiceActionFromProvisioningArtifact \a response.
 */
void DisassociateServiceActionFromProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateServiceActionFromProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DisassociateServiceActionFromProvisioningArtifactResponsePrivate
 * \brief The DisassociateServiceActionFromProvisioningArtifactResponsePrivate class provides private implementation for DisassociateServiceActionFromProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DisassociateServiceActionFromProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
DisassociateServiceActionFromProvisioningArtifactResponsePrivate::DisassociateServiceActionFromProvisioningArtifactResponsePrivate(
    DisassociateServiceActionFromProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DisassociateServiceActionFromProvisioningArtifact response element from \a xml.
 */
void DisassociateServiceActionFromProvisioningArtifactResponsePrivate::parseDisassociateServiceActionFromProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateServiceActionFromProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
