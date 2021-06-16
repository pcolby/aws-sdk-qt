/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describebackuppolicyresponse.h"
#include "describebackuppolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::DescribeBackupPolicyResponse
 * \brief The DescribeBackupPolicyResponse class provides an interace for EFS DescribeBackupPolicy responses.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
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
 * Parses a successful EFS DescribeBackupPolicy \a response.
 */
void DescribeBackupPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBackupPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EFS::DescribeBackupPolicyResponsePrivate
 * \brief The DescribeBackupPolicyResponsePrivate class provides private implementation for DescribeBackupPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a DescribeBackupPolicyResponsePrivate object with public implementation \a q.
 */
DescribeBackupPolicyResponsePrivate::DescribeBackupPolicyResponsePrivate(
    DescribeBackupPolicyResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a EFS DescribeBackupPolicy response element from \a xml.
 */
void DescribeBackupPolicyResponsePrivate::parseDescribeBackupPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EFS
} // namespace QtAws
