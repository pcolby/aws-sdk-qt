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

#include "listprovisioningartifactsresponse.h"
#include "listprovisioningartifactsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsResponse
 * \brief The ListProvisioningArtifactsResponse class provides an interace for ServiceCatalog ListProvisioningArtifacts responses.
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
 * \sa ServiceCatalogClient::listProvisioningArtifacts
 */

/*!
 * Constructs a ListProvisioningArtifactsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProvisioningArtifactsResponse::ListProvisioningArtifactsResponse(
        const ListProvisioningArtifactsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new ListProvisioningArtifactsResponsePrivate(this), parent)
{
    setRequest(new ListProvisioningArtifactsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProvisioningArtifactsRequest * ListProvisioningArtifactsResponse::request() const
{
    Q_D(const ListProvisioningArtifactsResponse);
    return static_cast<const ListProvisioningArtifactsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog ListProvisioningArtifacts \a response.
 */
void ListProvisioningArtifactsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListProvisioningArtifactsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::ListProvisioningArtifactsResponsePrivate
 * \brief The ListProvisioningArtifactsResponsePrivate class provides private implementation for ListProvisioningArtifactsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListProvisioningArtifactsResponsePrivate object with public implementation \a q.
 */
ListProvisioningArtifactsResponsePrivate::ListProvisioningArtifactsResponsePrivate(
    ListProvisioningArtifactsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog ListProvisioningArtifacts response element from \a xml.
 */
void ListProvisioningArtifactsResponsePrivate::parseListProvisioningArtifactsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProvisioningArtifactsResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
