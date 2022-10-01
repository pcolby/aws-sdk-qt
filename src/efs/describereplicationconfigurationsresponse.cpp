// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
