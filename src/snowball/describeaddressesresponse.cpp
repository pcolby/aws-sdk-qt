// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaddressesresponse.h"
#include "describeaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeAddressesResponse
 * \brief The DescribeAddressesResponse class provides an interace for Snowball DescribeAddresses responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::describeAddresses
 */

/*!
 * Constructs a DescribeAddressesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAddressesResponse::DescribeAddressesResponse(
        const DescribeAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeAddressesResponsePrivate(this), parent)
{
    setRequest(new DescribeAddressesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAddressesRequest * DescribeAddressesResponse::request() const
{
    Q_D(const DescribeAddressesResponse);
    return static_cast<const DescribeAddressesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball DescribeAddresses \a response.
 */
void DescribeAddressesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::DescribeAddressesResponsePrivate
 * \brief The DescribeAddressesResponsePrivate class provides private implementation for DescribeAddressesResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeAddressesResponsePrivate object with public implementation \a q.
 */
DescribeAddressesResponsePrivate::DescribeAddressesResponsePrivate(
    DescribeAddressesResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball DescribeAddresses response element from \a xml.
 */
void DescribeAddressesResponsePrivate::parseDescribeAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddressesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
