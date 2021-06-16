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

#include "describeserviceactionexecutionparametersresponse.h"
#include "describeserviceactionexecutionparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionExecutionParametersResponse
 * \brief The DescribeServiceActionExecutionParametersResponse class provides an interace for ServiceCatalog DescribeServiceActionExecutionParameters responses.
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
 * \sa ServiceCatalogClient::describeServiceActionExecutionParameters
 */

/*!
 * Constructs a DescribeServiceActionExecutionParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeServiceActionExecutionParametersResponse::DescribeServiceActionExecutionParametersResponse(
        const DescribeServiceActionExecutionParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DescribeServiceActionExecutionParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeServiceActionExecutionParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeServiceActionExecutionParametersRequest * DescribeServiceActionExecutionParametersResponse::request() const
{
    Q_D(const DescribeServiceActionExecutionParametersResponse);
    return static_cast<const DescribeServiceActionExecutionParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServiceCatalog DescribeServiceActionExecutionParameters \a response.
 */
void DescribeServiceActionExecutionParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeServiceActionExecutionParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionExecutionParametersResponsePrivate
 * \brief The DescribeServiceActionExecutionParametersResponsePrivate class provides private implementation for DescribeServiceActionExecutionParametersResponse.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeServiceActionExecutionParametersResponsePrivate object with public implementation \a q.
 */
DescribeServiceActionExecutionParametersResponsePrivate::DescribeServiceActionExecutionParametersResponsePrivate(
    DescribeServiceActionExecutionParametersResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/*!
 * Parses a ServiceCatalog DescribeServiceActionExecutionParameters response element from \a xml.
 */
void DescribeServiceActionExecutionParametersResponsePrivate::parseDescribeServiceActionExecutionParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServiceActionExecutionParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
