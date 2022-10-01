// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecopyjobresponse.h"
#include "describecopyjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeCopyJobResponse
 * \brief The DescribeCopyJobResponse class provides an interace for Backup DescribeCopyJob responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeCopyJob
 */

/*!
 * Constructs a DescribeCopyJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCopyJobResponse::DescribeCopyJobResponse(
        const DescribeCopyJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeCopyJobResponsePrivate(this), parent)
{
    setRequest(new DescribeCopyJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCopyJobRequest * DescribeCopyJobResponse::request() const
{
    Q_D(const DescribeCopyJobResponse);
    return static_cast<const DescribeCopyJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeCopyJob \a response.
 */
void DescribeCopyJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCopyJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeCopyJobResponsePrivate
 * \brief The DescribeCopyJobResponsePrivate class provides private implementation for DescribeCopyJobResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeCopyJobResponsePrivate object with public implementation \a q.
 */
DescribeCopyJobResponsePrivate::DescribeCopyJobResponsePrivate(
    DescribeCopyJobResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeCopyJob response element from \a xml.
 */
void DescribeCopyJobResponsePrivate::parseDescribeCopyJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCopyJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
