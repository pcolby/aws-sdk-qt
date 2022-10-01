// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebackuppolicyresponse.h"
#include "describebackuppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeBackupPolicyResponse
 * \brief The DescribeBackupPolicyResponse class provides an interace for Efs DescribeBackupPolicy responses.
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
 * \sa EfsClient::describeBackupPolicy
 */

/*!
 * Constructs a DescribeBackupPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBackupPolicyResponse::DescribeBackupPolicyResponse(
        const DescribeBackupPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeBackupPolicyResponsePrivate(this), parent)
{
    setRequest(new DescribeBackupPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBackupPolicyRequest * DescribeBackupPolicyResponse::request() const
{
    Q_D(const DescribeBackupPolicyResponse);
    return static_cast<const DescribeBackupPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeBackupPolicy \a response.
 */
void DescribeBackupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBackupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeBackupPolicyResponsePrivate
 * \brief The DescribeBackupPolicyResponsePrivate class provides private implementation for DescribeBackupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeBackupPolicyResponsePrivate object with public implementation \a q.
 */
DescribeBackupPolicyResponsePrivate::DescribeBackupPolicyResponsePrivate(
    DescribeBackupPolicyResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeBackupPolicy response element from \a xml.
 */
void DescribeBackupPolicyResponsePrivate::parseDescribeBackupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
