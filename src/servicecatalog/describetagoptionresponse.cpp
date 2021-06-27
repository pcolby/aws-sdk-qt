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
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
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
    return static_cast<const DescribeTagOptionRequest *>(ServiceCatalogResponse::request());
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
