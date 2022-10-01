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

#include "createreportplanresponse.h"
#include "createreportplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateReportPlanResponse
 * \brief The CreateReportPlanResponse class provides an interace for Backup CreateReportPlan responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createReportPlan
 */

/*!
 * Constructs a CreateReportPlanResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReportPlanResponse::CreateReportPlanResponse(
        const CreateReportPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new CreateReportPlanResponsePrivate(this), parent)
{
    setRequest(new CreateReportPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReportPlanRequest * CreateReportPlanResponse::request() const
{
    Q_D(const CreateReportPlanResponse);
    return static_cast<const CreateReportPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup CreateReportPlan \a response.
 */
void CreateReportPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReportPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::CreateReportPlanResponsePrivate
 * \brief The CreateReportPlanResponsePrivate class provides private implementation for CreateReportPlanResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateReportPlanResponsePrivate object with public implementation \a q.
 */
CreateReportPlanResponsePrivate::CreateReportPlanResponsePrivate(
    CreateReportPlanResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup CreateReportPlan response element from \a xml.
 */
void CreateReportPlanResponsePrivate::parseCreateReportPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReportPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
