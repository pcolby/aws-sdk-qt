// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetagsresponse.h"
#include "describetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeTagsResponse
 * \brief The DescribeTagsResponse class provides an interace for Efs DescribeTags responses.
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
 * \sa EfsClient::describeTags
 */

/*!
 * Constructs a DescribeTagsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTagsResponse::DescribeTagsResponse(
        const DescribeTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeTagsResponsePrivate(this), parent)
{
    setRequest(new DescribeTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTagsRequest * DescribeTagsResponse::request() const
{
    Q_D(const DescribeTagsResponse);
    return static_cast<const DescribeTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeTags \a response.
 */
void DescribeTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeTagsResponsePrivate
 * \brief The DescribeTagsResponsePrivate class provides private implementation for DescribeTagsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeTagsResponsePrivate object with public implementation \a q.
 */
DescribeTagsResponsePrivate::DescribeTagsResponsePrivate(
    DescribeTagsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeTags response element from \a xml.
 */
void DescribeTagsResponsePrivate::parseDescribeTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
