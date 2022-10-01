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

#include "describeframeworkresponse.h"
#include "describeframeworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeFrameworkResponse
 * \brief The DescribeFrameworkResponse class provides an interace for Backup DescribeFramework responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeFramework
 */

/*!
 * Constructs a DescribeFrameworkResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFrameworkResponse::DescribeFrameworkResponse(
        const DescribeFrameworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeFrameworkResponsePrivate(this), parent)
{
    setRequest(new DescribeFrameworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFrameworkRequest * DescribeFrameworkResponse::request() const
{
    Q_D(const DescribeFrameworkResponse);
    return static_cast<const DescribeFrameworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeFramework \a response.
 */
void DescribeFrameworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFrameworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeFrameworkResponsePrivate
 * \brief The DescribeFrameworkResponsePrivate class provides private implementation for DescribeFrameworkResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeFrameworkResponsePrivate object with public implementation \a q.
 */
DescribeFrameworkResponsePrivate::DescribeFrameworkResponsePrivate(
    DescribeFrameworkResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeFramework response element from \a xml.
 */
void DescribeFrameworkResponsePrivate::parseDescribeFrameworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFrameworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
