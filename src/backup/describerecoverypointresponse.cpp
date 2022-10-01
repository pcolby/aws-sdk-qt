// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
