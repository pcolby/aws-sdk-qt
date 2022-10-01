// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetagoptionresponse.h"
#include "describetagoptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeTagOptionResponse
 * \brief The DescribeTagOptionResponse class provides an interace for ServiceCatalog DescribeTagOption responses.
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
 * \sa ServiceCatalogClient::describeTagOption
 */

/*!
 * Constructs a DescribeTagOptionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTagOptionResponse::DescribeTagOptionResponse(
        const DescribeTagOptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeTagOptionResponsePrivate(this), parent)
{
    setRequest(new DescribeTagOptionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTagOptionRequest * DescribeTagOptionResponse::request() const
{
    Q_D(const DescribeTagOptionResponse);
    return static_cast<const DescribeTagOptionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeTagOption \a response.
 */
void DescribeTagOptionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTagOptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeTagOptionResponsePrivate
 * \brief The DescribeTagOptionResponsePrivate class provides private implementation for DescribeTagOptionResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeTagOptionResponsePrivate object with public implementation \a q.
 */
DescribeTagOptionResponsePrivate::DescribeTagOptionResponsePrivate(
    DescribeTagOptionResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeTagOption response element from \a xml.
 */
void DescribeTagOptionResponsePrivate::parseDescribeTagOptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTagOptionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
