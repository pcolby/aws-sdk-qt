/*
    Copyright 2013-2018 Paul Colby

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

#include "describeaddressresponse.h"
#include "describeaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeAddressResponse
 * \brief The DescribeAddressResponse class provides an interace for Snowball DescribeAddress responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snowball commands described
 *  here provide access to the same functionality that is available in the AWS Snowball Management Console, which enables
 *  you to create and manage jobs for Snowball. To transfer data locally with a Snowball device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for Snowball. For more information, see the <a
 *  href="http://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::describeAddress
 */

/*!
 * Constructs a DescribeAddressResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAddressResponse::DescribeAddressResponse(
        const DescribeAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeAddressResponsePrivate(this), parent)
{
    setRequest(new DescribeAddressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAddressRequest * DescribeAddressResponse::request() const
{
    Q_D(const DescribeAddressResponse);
    return static_cast<const DescribeAddressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball DescribeAddress \a response.
 */
void DescribeAddressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::DescribeAddressResponsePrivate
 * \brief The DescribeAddressResponsePrivate class provides private implementation for DescribeAddressResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeAddressResponsePrivate object with public implementation \a q.
 */
DescribeAddressResponsePrivate::DescribeAddressResponsePrivate(
    DescribeAddressResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball DescribeAddress response element from \a xml.
 */
void DescribeAddressResponsePrivate::parseDescribeAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
