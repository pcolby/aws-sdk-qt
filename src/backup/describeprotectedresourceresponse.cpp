// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
