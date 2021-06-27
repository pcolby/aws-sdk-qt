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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
    return static_cast<const DescribeGlobalSettingsRequest *>(BackupResponse::request());
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
