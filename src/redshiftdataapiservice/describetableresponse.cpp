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

#include "describetableresponse.h"
#include "describetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RedshiftDataAPIService {

/*!
 * \class QtAws::RedshiftDataAPIService::DescribeTableResponse
 * \brief The DescribeTableResponse class provides an interace for RedshiftDataAPIService DescribeTable responses.
 *
 * \inmodule QtAwsRedshiftDataAPIService
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run individual SQL
 *  statements, which are committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataAPIServiceClient::describeTable
 */

/*!
 * Constructs a DescribeTableResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTableResponse::DescribeTableResponse(
        const DescribeTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftDataAPIServiceResponse(new DescribeTableResponsePrivate(this), parent)
{
    setRequest(new DescribeTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTableRequest * DescribeTableResponse::request() const
{
    Q_D(const DescribeTableResponse);
    return static_cast<const DescribeTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RedshiftDataAPIService DescribeTable \a response.
 */
void DescribeTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RedshiftDataAPIService::DescribeTableResponsePrivate
 * \brief The DescribeTableResponsePrivate class provides private implementation for DescribeTableResponse.
 * \internal
 *
 * \inmodule QtAwsRedshiftDataAPIService
 */

/*!
 * Constructs a DescribeTableResponsePrivate object with public implementation \a q.
 */
DescribeTableResponsePrivate::DescribeTableResponsePrivate(
    DescribeTableResponse * const q) : RedshiftDataAPIServiceResponsePrivate(q)
{

}

/*!
 * Parses a RedshiftDataAPIService DescribeTable response element from \a xml.
 */
void DescribeTableResponsePrivate::parseDescribeTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RedshiftDataAPIService
} // namespace QtAws
