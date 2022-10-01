// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereportplanresponse.h"
#include "describereportplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::DescribeReportPlanResponse
 * \brief The DescribeReportPlanResponse class provides an interace for Backup DescribeReportPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::describeReportPlan
 */

/*!
 * Constructs a DescribeReportPlanResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReportPlanResponse::DescribeReportPlanResponse(
        const DescribeReportPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new DescribeReportPlanResponsePrivate(this), parent)
{
    setRequest(new DescribeReportPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReportPlanRequest * DescribeReportPlanResponse::request() const
{
    Q_D(const DescribeReportPlanResponse);
    return static_cast<const DescribeReportPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup DescribeReportPlan \a response.
 */
void DescribeReportPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReportPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::DescribeReportPlanResponsePrivate
 * \brief The DescribeReportPlanResponsePrivate class provides private implementation for DescribeReportPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a DescribeReportPlanResponsePrivate object with public implementation \a q.
 */
DescribeReportPlanResponsePrivate::DescribeReportPlanResponsePrivate(
    DescribeReportPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup DescribeReportPlan response element from \a xml.
 */
void DescribeReportPlanResponsePrivate::parseDescribeReportPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReportPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
