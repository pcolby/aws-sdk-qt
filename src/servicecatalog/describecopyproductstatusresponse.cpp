// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecopyproductstatusresponse.h"
#include "describecopyproductstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeCopyProductStatusResponse
 * \brief The DescribeCopyProductStatusResponse class provides an interace for ServiceCatalog DescribeCopyProductStatus responses.
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
 * \sa ServiceCatalogClient::describeCopyProductStatus
 */

/*!
 * Constructs a DescribeCopyProductStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCopyProductStatusResponse::DescribeCopyProductStatusResponse(
        const DescribeCopyProductStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeCopyProductStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeCopyProductStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCopyProductStatusRequest * DescribeCopyProductStatusResponse::request() const
{
    Q_D(const DescribeCopyProductStatusResponse);
    return static_cast<const DescribeCopyProductStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeCopyProductStatus \a response.
 */
void DescribeCopyProductStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCopyProductStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeCopyProductStatusResponsePrivate
 * \brief The DescribeCopyProductStatusResponsePrivate class provides private implementation for DescribeCopyProductStatusResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeCopyProductStatusResponsePrivate object with public implementation \a q.
 */
DescribeCopyProductStatusResponsePrivate::DescribeCopyProductStatusResponsePrivate(
    DescribeCopyProductStatusResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeCopyProductStatus response element from \a xml.
 */
void DescribeCopyProductStatusResponsePrivate::parseDescribeCopyProductStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCopyProductStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
