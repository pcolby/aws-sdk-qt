// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereturnshippinglabelresponse.h"
#include "describereturnshippinglabelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeReturnShippingLabelResponse
 * \brief The DescribeReturnShippingLabelResponse class provides an interace for Snowball DescribeReturnShippingLabel responses.
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
 * \sa SnowballClient::describeReturnShippingLabel
 */

/*!
 * Constructs a DescribeReturnShippingLabelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReturnShippingLabelResponse::DescribeReturnShippingLabelResponse(
        const DescribeReturnShippingLabelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeReturnShippingLabelResponsePrivate(this), parent)
{
    setRequest(new DescribeReturnShippingLabelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReturnShippingLabelRequest * DescribeReturnShippingLabelResponse::request() const
{
    Q_D(const DescribeReturnShippingLabelResponse);
    return static_cast<const DescribeReturnShippingLabelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball DescribeReturnShippingLabel \a response.
 */
void DescribeReturnShippingLabelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReturnShippingLabelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::DescribeReturnShippingLabelResponsePrivate
 * \brief The DescribeReturnShippingLabelResponsePrivate class provides private implementation for DescribeReturnShippingLabelResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeReturnShippingLabelResponsePrivate object with public implementation \a q.
 */
DescribeReturnShippingLabelResponsePrivate::DescribeReturnShippingLabelResponsePrivate(
    DescribeReturnShippingLabelResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball DescribeReturnShippingLabel response element from \a xml.
 */
void DescribeReturnShippingLabelResponsePrivate::parseDescribeReturnShippingLabelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReturnShippingLabelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
