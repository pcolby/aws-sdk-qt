// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilesystempolicyresponse.h"
#include "describefilesystempolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeFileSystemPolicyResponse
 * \brief The DescribeFileSystemPolicyResponse class provides an interace for Efs DescribeFileSystemPolicy responses.
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
 * \sa EfsClient::describeFileSystemPolicy
 */

/*!
 * Constructs a DescribeFileSystemPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFileSystemPolicyResponse::DescribeFileSystemPolicyResponse(
        const DescribeFileSystemPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeFileSystemPolicyResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFileSystemPolicyRequest * DescribeFileSystemPolicyResponse::request() const
{
    Q_D(const DescribeFileSystemPolicyResponse);
    return static_cast<const DescribeFileSystemPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeFileSystemPolicy \a response.
 */
void DescribeFileSystemPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFileSystemPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeFileSystemPolicyResponsePrivate
 * \brief The DescribeFileSystemPolicyResponsePrivate class provides private implementation for DescribeFileSystemPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeFileSystemPolicyResponsePrivate object with public implementation \a q.
 */
DescribeFileSystemPolicyResponsePrivate::DescribeFileSystemPolicyResponsePrivate(
    DescribeFileSystemPolicyResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeFileSystemPolicy response element from \a xml.
 */
void DescribeFileSystemPolicyResponsePrivate::parseDescribeFileSystemPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
