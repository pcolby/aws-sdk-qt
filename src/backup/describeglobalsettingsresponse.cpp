// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeglobalsettingsresponse.h"
#include "describeglobalsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeGlobalSettingsResponse
 * \brief The DescribeGlobalSettingsResponse class provides an interace for Backup DescribeGlobalSettings responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeGlobalSettings
 */

/*!
 * Constructs a DescribeGlobalSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGlobalSettingsResponse::DescribeGlobalSettingsResponse(
        const DescribeGlobalSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeGlobalSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeGlobalSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGlobalSettingsRequest * DescribeGlobalSettingsResponse::request() const
{
    Q_D(const DescribeGlobalSettingsResponse);
    return static_cast<const DescribeGlobalSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeGlobalSettings \a response.
 */
void DescribeGlobalSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGlobalSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeGlobalSettingsResponsePrivate
 * \brief The DescribeGlobalSettingsResponsePrivate class provides private implementation for DescribeGlobalSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeGlobalSettingsResponsePrivate object with public implementation \a q.
 */
DescribeGlobalSettingsResponsePrivate::DescribeGlobalSettingsResponsePrivate(
    DescribeGlobalSettingsResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeGlobalSettings response element from \a xml.
 */
void DescribeGlobalSettingsResponsePrivate::parseDescribeGlobalSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGlobalSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
