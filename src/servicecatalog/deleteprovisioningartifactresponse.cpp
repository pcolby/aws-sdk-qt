/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
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
    Q_D(DeleteProvisioningArtifactResponse);
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
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
