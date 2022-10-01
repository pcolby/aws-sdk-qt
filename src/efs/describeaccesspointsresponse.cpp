// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaccesspointsresponse.h"
#include "describeaccesspointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeAccessPointsResponse
 * \brief The DescribeAccessPointsResponse class provides an interace for Efs DescribeAccessPoints responses.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::describeAccessPoints
 */

/*!
 * Constructs a DescribeAccessPointsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAccessPointsResponse::DescribeAccessPointsResponse(
        const DescribeAccessPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeAccessPointsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccessPointsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAccessPointsRequest * DescribeAccessPointsResponse::request() const
{
    Q_D(const DescribeAccessPointsResponse);
    return static_cast<const DescribeAccessPointsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeAccessPoints \a response.
 */
void DescribeAccessPointsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAccessPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeAccessPointsResponsePrivate
 * \brief The DescribeAccessPointsResponsePrivate class provides private implementation for DescribeAccessPointsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeAccessPointsResponsePrivate object with public implementation \a q.
 */
DescribeAccessPointsResponsePrivate::DescribeAccessPointsResponsePrivate(
    DescribeAccessPointsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeAccessPoints response element from \a xml.
 */
void DescribeAccessPointsResponsePrivate::parseDescribeAccessPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccessPointsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
