// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebackupsresponse.h"
#include "describebackupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::DescribeBackupsResponse
 * \brief The DescribeBackupsResponse class provides an interace for CloudHsmV2 DescribeBackups responses.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::describeBackups
 */

/*!
 * Constructs a DescribeBackupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBackupsResponse::DescribeBackupsResponse(
        const DescribeBackupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHsmV2Response(new DescribeBackupsResponsePrivate(this), parent)
{
    setRequest(new DescribeBackupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBackupsRequest * DescribeBackupsResponse::request() const
{
    Q_D(const DescribeBackupsResponse);
    return static_cast<const DescribeBackupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHsmV2 DescribeBackups \a response.
 */
void DescribeBackupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBackupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHsmV2::DescribeBackupsResponsePrivate
 * \brief The DescribeBackupsResponsePrivate class provides private implementation for DescribeBackupsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a DescribeBackupsResponsePrivate object with public implementation \a q.
 */
DescribeBackupsResponsePrivate::DescribeBackupsResponsePrivate(
    DescribeBackupsResponse * const q) : CloudHsmV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHsmV2 DescribeBackups response element from \a xml.
 */
void DescribeBackupsResponsePrivate::parseDescribeBackupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHsmV2
} // namespace QtAws
