// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilesystemsresponse.h"
#include "describefilesystemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeFileSystemsResponse
 * \brief The DescribeFileSystemsResponse class provides an interace for Efs DescribeFileSystems responses.
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
 * \sa EfsClient::describeFileSystems
 */

/*!
 * Constructs a DescribeFileSystemsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFileSystemsResponse::DescribeFileSystemsResponse(
        const DescribeFileSystemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeFileSystemsResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFileSystemsRequest * DescribeFileSystemsResponse::request() const
{
    Q_D(const DescribeFileSystemsResponse);
    return static_cast<const DescribeFileSystemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeFileSystems \a response.
 */
void DescribeFileSystemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFileSystemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeFileSystemsResponsePrivate
 * \brief The DescribeFileSystemsResponsePrivate class provides private implementation for DescribeFileSystemsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeFileSystemsResponsePrivate object with public implementation \a q.
 */
DescribeFileSystemsResponsePrivate::DescribeFileSystemsResponsePrivate(
    DescribeFileSystemsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeFileSystems response element from \a xml.
 */
void DescribeFileSystemsResponsePrivate::parseDescribeFileSystemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
