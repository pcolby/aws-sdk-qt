// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeproductviewresponse.h"
#include "describeproductviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProductViewResponse
 * \brief The DescribeProductViewResponse class provides an interace for ServiceCatalog DescribeProductView responses.
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
 * \sa ServiceCatalogClient::describeProductView
 */

/*!
 * Constructs a DescribeProductViewResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProductViewResponse::DescribeProductViewResponse(
        const DescribeProductViewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProductViewResponsePrivate(this), parent)
{
    setRequest(new DescribeProductViewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProductViewRequest * DescribeProductViewResponse::request() const
{
    Q_D(const DescribeProductViewResponse);
    return static_cast<const DescribeProductViewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProductView \a response.
 */
void DescribeProductViewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProductViewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProductViewResponsePrivate
 * \brief The DescribeProductViewResponsePrivate class provides private implementation for DescribeProductViewResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProductViewResponsePrivate object with public implementation \a q.
 */
DescribeProductViewResponsePrivate::DescribeProductViewResponsePrivate(
    DescribeProductViewResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProductView response element from \a xml.
 */
void DescribeProductViewResponsePrivate::parseDescribeProductViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProductViewResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
