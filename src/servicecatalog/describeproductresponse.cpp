// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeproductresponse.h"
#include "describeproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProductResponse
 * \brief The DescribeProductResponse class provides an interace for ServiceCatalog DescribeProduct responses.
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
 * \sa ServiceCatalogClient::describeProduct
 */

/*!
 * Constructs a DescribeProductResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProductResponse::DescribeProductResponse(
        const DescribeProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeProductResponsePrivate(this), parent)
{
    setRequest(new DescribeProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProductRequest * DescribeProductResponse::request() const
{
    Q_D(const DescribeProductResponse);
    return static_cast<const DescribeProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeProduct \a response.
 */
void DescribeProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProductResponsePrivate
 * \brief The DescribeProductResponsePrivate class provides private implementation for DescribeProductResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProductResponsePrivate object with public implementation \a q.
 */
DescribeProductResponsePrivate::DescribeProductResponsePrivate(
    DescribeProductResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeProduct response element from \a xml.
 */
void DescribeProductResponsePrivate::parseDescribeProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
