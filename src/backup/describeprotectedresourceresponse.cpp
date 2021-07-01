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

#include "describeprotectedresourceresponse.h"
#include "describeprotectedresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeProtectedResourceResponse
 * \brief The DescribeProtectedResourceResponse class provides an interace for Backup DescribeProtectedResource responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeProtectedResource
 */

/*!
 * Constructs a DescribeProtectedResourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProtectedResourceResponse::DescribeProtectedResourceResponse(
        const DescribeProtectedResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeProtectedResourceResponsePrivate(this), parent)
{
    setRequest(new DescribeProtectedResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProtectedResourceRequest * DescribeProtectedResourceResponse::request() const
{
    Q_D(const DescribeProtectedResourceResponse);
    return static_cast<const DescribeProtectedResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeProtectedResource \a response.
 */
void DescribeProtectedResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProtectedResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeProtectedResourceResponsePrivate
 * \brief The DescribeProtectedResourceResponsePrivate class provides private implementation for DescribeProtectedResourceResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeProtectedResourceResponsePrivate object with public implementation \a q.
 */
DescribeProtectedResourceResponsePrivate::DescribeProtectedResourceResponsePrivate(
    DescribeProtectedResourceResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeProtectedResource response element from \a xml.
 */
void DescribeProtectedResourceResponsePrivate::parseDescribeProtectedResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProtectedResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
