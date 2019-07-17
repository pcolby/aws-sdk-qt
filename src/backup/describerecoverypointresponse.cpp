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

#include "describerecoverypointresponse.h"
#include "describerecoverypointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeRecoveryPointResponse
 * \brief The DescribeRecoveryPointResponse class provides an interace for Backup DescribeRecoveryPoint responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeRecoveryPoint
 */

/*!
 * Constructs a DescribeRecoveryPointResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRecoveryPointResponse::DescribeRecoveryPointResponse(
        const DescribeRecoveryPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeRecoveryPointResponsePrivate(this), parent)
{
    setRequest(new DescribeRecoveryPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRecoveryPointRequest * DescribeRecoveryPointResponse::request() const
{
    Q_D(const DescribeRecoveryPointResponse);
    return static_cast<const DescribeRecoveryPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeRecoveryPoint \a response.
 */
void DescribeRecoveryPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRecoveryPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeRecoveryPointResponsePrivate
 * \brief The DescribeRecoveryPointResponsePrivate class provides private implementation for DescribeRecoveryPointResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeRecoveryPointResponsePrivate object with public implementation \a q.
 */
DescribeRecoveryPointResponsePrivate::DescribeRecoveryPointResponsePrivate(
    DescribeRecoveryPointResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeRecoveryPoint response element from \a xml.
 */
void DescribeRecoveryPointResponsePrivate::parseDescribeRecoveryPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRecoveryPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
