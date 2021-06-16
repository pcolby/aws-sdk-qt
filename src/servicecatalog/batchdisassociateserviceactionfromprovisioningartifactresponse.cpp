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

#include "batchdisassociateserviceactionfromprovisioningartifactresponse.h"
#include "batchdisassociateserviceactionfromprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::BatchDisassociateServiceActionFromProvisioningArtifactResponse
 * \brief The BatchDisassociateServiceActionFromProvisioningArtifactResponse class provides an interace for ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact responses.
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
 * \sa ServiceCatalogClient::batchDisassociateServiceActionFromProvisioningArtifact
 */

/*!
 * Constructs a BatchDisassociateServiceActionFromProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDisassociateServiceActionFromProvisioningArtifactResponse::BatchDisassociateServiceActionFromProvisioningArtifactResponse(
        const BatchDisassociateServiceActionFromProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new BatchDisassociateServiceActionFromProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDisassociateServiceActionFromProvisioningArtifactRequest * BatchDisassociateServiceActionFromProvisioningArtifactResponse::request() const
{
    Q_D(const BatchDisassociateServiceActionFromProvisioningArtifactResponse);
    return static_cast<const BatchDisassociateServiceActionFromProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact \a response.
 */
void BatchDisassociateServiceActionFromProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDisassociateServiceActionFromProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate
 * \brief The BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate class provides private implementation for BatchDisassociateServiceActionFromProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate::BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate(
    BatchDisassociateServiceActionFromProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog BatchDisassociateServiceActionFromProvisioningArtifact response element from \a xml.
 */
void BatchDisassociateServiceActionFromProvisioningArtifactResponsePrivate::parseBatchDisassociateServiceActionFromProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDisassociateServiceActionFromProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
