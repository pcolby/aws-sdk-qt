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

#include "describereplicationconfigurationsresponse.h"
#include "describereplicationconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeReplicationConfigurationsResponse
 * \brief The DescribeReplicationConfigurationsResponse class provides an interace for Efs DescribeReplicationConfigurations responses.
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
 * \sa EfsClient::describeReplicationConfigurations
 */

/*!
 * Constructs a DescribeReplicationConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReplicationConfigurationsResponse::DescribeReplicationConfigurationsResponse(
        const DescribeReplicationConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeReplicationConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeReplicationConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReplicationConfigurationsRequest * DescribeReplicationConfigurationsResponse::request() const
{
    Q_D(const DescribeReplicationConfigurationsResponse);
    return static_cast<const DescribeReplicationConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeReplicationConfigurations \a response.
 */
void DescribeReplicationConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReplicationConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeReplicationConfigurationsResponsePrivate
 * \brief The DescribeReplicationConfigurationsResponsePrivate class provides private implementation for DescribeReplicationConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeReplicationConfigurationsResponsePrivate object with public implementation \a q.
 */
DescribeReplicationConfigurationsResponsePrivate::DescribeReplicationConfigurationsResponsePrivate(
    DescribeReplicationConfigurationsResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeReplicationConfigurations response element from \a xml.
 */
void DescribeReplicationConfigurationsResponsePrivate::parseDescribeReplicationConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReplicationConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
