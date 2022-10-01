// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applypendingmaintenanceactionresponse.h"
#include "applypendingmaintenanceactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::ApplyPendingMaintenanceActionResponse
 * \brief The ApplyPendingMaintenanceActionResponse class provides an interace for DocDb ApplyPendingMaintenanceAction responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::applyPendingMaintenanceAction
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionResponse object for \a reply to \a request, with parent \a parent.
 */
ApplyPendingMaintenanceActionResponse::ApplyPendingMaintenanceActionResponse(
        const ApplyPendingMaintenanceActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new ApplyPendingMaintenanceActionResponsePrivate(this), parent)
{
    setRequest(new ApplyPendingMaintenanceActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ApplyPendingMaintenanceActionRequest * ApplyPendingMaintenanceActionResponse::request() const
{
    Q_D(const ApplyPendingMaintenanceActionResponse);
    return static_cast<const ApplyPendingMaintenanceActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb ApplyPendingMaintenanceAction \a response.
 */
void ApplyPendingMaintenanceActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ApplyPendingMaintenanceActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::ApplyPendingMaintenanceActionResponsePrivate
 * \brief The ApplyPendingMaintenanceActionResponsePrivate class provides private implementation for ApplyPendingMaintenanceActionResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a ApplyPendingMaintenanceActionResponsePrivate object with public implementation \a q.
 */
ApplyPendingMaintenanceActionResponsePrivate::ApplyPendingMaintenanceActionResponsePrivate(
    ApplyPendingMaintenanceActionResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb ApplyPendingMaintenanceAction response element from \a xml.
 */
void ApplyPendingMaintenanceActionResponsePrivate::parseApplyPendingMaintenanceActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplyPendingMaintenanceActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
