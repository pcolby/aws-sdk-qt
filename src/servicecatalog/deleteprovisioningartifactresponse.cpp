// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprovisioningartifactresponse.h"
#include "deleteprovisioningartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisioningArtifactResponse
 * \brief The DeleteProvisioningArtifactResponse class provides an interace for ServiceCatalog DeleteProvisioningArtifact responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::deleteProvisioningArtifact
 */

/*!
 * Constructs a DeleteProvisioningArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProvisioningArtifactResponse::DeleteProvisioningArtifactResponse(
        const DeleteProvisioningArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteProvisioningArtifactResponsePrivate(this), parent)
{
    setRequest(new DeleteProvisioningArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProvisioningArtifactRequest * DeleteProvisioningArtifactResponse::request() const
{
    Q_D(const DeleteProvisioningArtifactResponse);
    return static_cast<const DeleteProvisioningArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DeleteProvisioningArtifact \a response.
 */
void DeleteProvisioningArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProvisioningArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisioningArtifactResponsePrivate
 * \brief The DeleteProvisioningArtifactResponsePrivate class provides private implementation for DeleteProvisioningArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteProvisioningArtifactResponsePrivate object with public implementation \a q.
 */
DeleteProvisioningArtifactResponsePrivate::DeleteProvisioningArtifactResponsePrivate(
    DeleteProvisioningArtifactResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DeleteProvisioningArtifact response element from \a xml.
 */
void DeleteProvisioningArtifactResponsePrivate::parseDeleteProvisioningArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProvisioningArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
