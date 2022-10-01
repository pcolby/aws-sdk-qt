// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
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
