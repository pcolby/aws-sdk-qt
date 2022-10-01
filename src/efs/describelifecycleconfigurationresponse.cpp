// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelifecycleconfigurationresponse.h"
#include "describelifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DescribeLifecycleConfigurationResponse
 * \brief The DescribeLifecycleConfigurationResponse class provides an interace for Efs DescribeLifecycleConfiguration responses.
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
 * \sa EfsClient::describeLifecycleConfiguration
 */

/*!
 * Constructs a DescribeLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLifecycleConfigurationResponse::DescribeLifecycleConfigurationResponse(
        const DescribeLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EfsResponse(new DescribeLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLifecycleConfigurationRequest * DescribeLifecycleConfigurationResponse::request() const
{
    Q_D(const DescribeLifecycleConfigurationResponse);
    return static_cast<const DescribeLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Efs DescribeLifecycleConfiguration \a response.
 */
void DescribeLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Efs::DescribeLifecycleConfigurationResponsePrivate
 * \brief The DescribeLifecycleConfigurationResponsePrivate class provides private implementation for DescribeLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DescribeLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeLifecycleConfigurationResponsePrivate::DescribeLifecycleConfigurationResponsePrivate(
    DescribeLifecycleConfigurationResponse * const q) : EfsResponsePrivate(q)
{

}

/*!
 * Parses a Efs DescribeLifecycleConfiguration response element from \a xml.
 */
void DescribeLifecycleConfigurationResponsePrivate::parseDescribeLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Efs
} // namespace QtAws
