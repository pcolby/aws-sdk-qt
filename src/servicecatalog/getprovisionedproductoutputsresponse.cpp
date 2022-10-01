// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprovisionedproductoutputsresponse.h"
#include "getprovisionedproductoutputsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::GetProvisionedProductOutputsResponse
 * \brief The GetProvisionedProductOutputsResponse class provides an interace for ServiceCatalog GetProvisionedProductOutputs responses.
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
 * \sa ServiceCatalogClient::getProvisionedProductOutputs
 */

/*!
 * Constructs a GetProvisionedProductOutputsResponse object for \a reply to \a request, with parent \a parent.
 */
GetProvisionedProductOutputsResponse::GetProvisionedProductOutputsResponse(
        const GetProvisionedProductOutputsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new GetProvisionedProductOutputsResponsePrivate(this), parent)
{
    setRequest(new GetProvisionedProductOutputsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProvisionedProductOutputsRequest * GetProvisionedProductOutputsResponse::request() const
{
    Q_D(const GetProvisionedProductOutputsResponse);
    return static_cast<const GetProvisionedProductOutputsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog GetProvisionedProductOutputs \a response.
 */
void GetProvisionedProductOutputsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProvisionedProductOutputsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::GetProvisionedProductOutputsResponsePrivate
 * \brief The GetProvisionedProductOutputsResponsePrivate class provides private implementation for GetProvisionedProductOutputsResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a GetProvisionedProductOutputsResponsePrivate object with public implementation \a q.
 */
GetProvisionedProductOutputsResponsePrivate::GetProvisionedProductOutputsResponsePrivate(
    GetProvisionedProductOutputsResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog GetProvisionedProductOutputs response element from \a xml.
 */
void GetProvisionedProductOutputsResponsePrivate::parseGetProvisionedProductOutputsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProvisionedProductOutputsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
