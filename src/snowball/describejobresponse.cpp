// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describejobresponse.h"
#include "describejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::DescribeJobResponse
 * \brief The DescribeJobResponse class provides an interace for Snowball DescribeJob responses.
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
 * \sa SnowballClient::describeJob
 */

/*!
 * Constructs a DescribeJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobResponse::DescribeJobResponse(
        const DescribeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new DescribeJobResponsePrivate(this), parent)
{
    setRequest(new DescribeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobRequest * DescribeJobResponse::request() const
{
    Q_D(const DescribeJobResponse);
    return static_cast<const DescribeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball DescribeJob \a response.
 */
void DescribeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::DescribeJobResponsePrivate
 * \brief The DescribeJobResponsePrivate class provides private implementation for DescribeJobResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a DescribeJobResponsePrivate object with public implementation \a q.
 */
DescribeJobResponsePrivate::DescribeJobResponsePrivate(
    DescribeJobResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball DescribeJob response element from \a xml.
 */
void DescribeJobResponsePrivate::parseDescribeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
