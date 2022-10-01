// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
    Q_D(const DescribeRegionSettingsResponse);
    return static_cast<const DescribeRegionSettingsRequest *>(d->request);
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
