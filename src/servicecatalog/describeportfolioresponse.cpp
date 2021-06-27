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

#include "describeportfolioresponse.h"
#include "describeportfolioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioResponse
 * \brief The DescribePortfolioResponse class provides an interace for ServiceCatalog DescribePortfolio responses.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::describePortfolio
 */

/*!
 * Constructs a DescribePortfolioResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePortfolioResponse::DescribePortfolioResponse(
        const DescribePortfolioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribePortfolioResponsePrivate(this), parent)
{
    setRequest(new DescribePortfolioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePortfolioRequest * DescribePortfolioResponse::request() const
{
    return static_cast<const DescribePortfolioRequest *>(ServiceCatalogResponse::request());
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribePortfolio \a response.
 */
void DescribePortfolioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePortfolioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribePortfolioResponsePrivate
 * \brief The DescribePortfolioResponsePrivate class provides private implementation for DescribePortfolioResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribePortfolioResponsePrivate object with public implementation \a q.
 */
DescribePortfolioResponsePrivate::DescribePortfolioResponsePrivate(
    DescribePortfolioResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribePortfolio response element from \a xml.
 */
void DescribePortfolioResponsePrivate::parseDescribePortfolioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePortfolioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
