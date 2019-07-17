/*
    Copyright 2013-2019 Paul Colby

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
