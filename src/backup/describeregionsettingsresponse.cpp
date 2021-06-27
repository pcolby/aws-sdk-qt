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

#include "describeregionsettingsresponse.h"
#include "describeregionsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeRegionSettingsResponse
 * \brief The DescribeRegionSettingsResponse class provides an interace for Backup DescribeRegionSettings responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeRegionSettings
 */

/*!
 * Constructs a DescribeRegionSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRegionSettingsResponse::DescribeRegionSettingsResponse(
        const DescribeRegionSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeRegionSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeRegionSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRegionSettingsRequest * DescribeRegionSettingsResponse::request() const
{
    return static_cast<const DescribeRegionSettingsRequest *>(BackupResponse::request());
}

/*!
 * \reimp
 * Parses a successful Backup DescribeRegionSettings \a response.
 */
void DescribeRegionSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRegionSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeRegionSettingsResponsePrivate
 * \brief The DescribeRegionSettingsResponsePrivate class provides private implementation for DescribeRegionSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeRegionSettingsResponsePrivate object with public implementation \a q.
 */
DescribeRegionSettingsResponsePrivate::DescribeRegionSettingsResponsePrivate(
    DescribeRegionSettingsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeRegionSettings response element from \a xml.
 */
void DescribeRegionSettingsResponsePrivate::parseDescribeRegionSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRegionSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
