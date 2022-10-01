// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepackagingconfigurationresponse.h"
#include "describepackagingconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingConfigurationResponse
 * \brief The DescribePackagingConfigurationResponse class provides an interace for MediaPackageVod DescribePackagingConfiguration responses.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::describePackagingConfiguration
 */

/*!
 * Constructs a DescribePackagingConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePackagingConfigurationResponse::DescribePackagingConfigurationResponse(
        const DescribePackagingConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageVodResponse(new DescribePackagingConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribePackagingConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePackagingConfigurationRequest * DescribePackagingConfigurationResponse::request() const
{
    Q_D(const DescribePackagingConfigurationResponse);
    return static_cast<const DescribePackagingConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackageVod DescribePackagingConfiguration \a response.
 */
void DescribePackagingConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePackagingConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackageVod::DescribePackagingConfigurationResponsePrivate
 * \brief The DescribePackagingConfigurationResponsePrivate class provides private implementation for DescribePackagingConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a DescribePackagingConfigurationResponsePrivate object with public implementation \a q.
 */
DescribePackagingConfigurationResponsePrivate::DescribePackagingConfigurationResponsePrivate(
    DescribePackagingConfigurationResponse * const q) : MediaPackageVodResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackageVod DescribePackagingConfiguration response element from \a xml.
 */
void DescribePackagingConfigurationResponsePrivate::parseDescribePackagingConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePackagingConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackageVod
} // namespace QtAws
