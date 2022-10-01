// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "restoredbclustertopointintimeresponse.h"
#include "restoredbclustertopointintimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeResponse
 * \brief The RestoreDBClusterToPointInTimeResponse class provides an interace for DocDb RestoreDBClusterToPointInTime responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::restoreDBClusterToPointInTime
 */

/*!
 * Constructs a RestoreDBClusterToPointInTimeResponse object for \a reply to \a request, with parent \a parent.
 */
RestoreDBClusterToPointInTimeResponse::RestoreDBClusterToPointInTimeResponse(
        const RestoreDBClusterToPointInTimeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new RestoreDBClusterToPointInTimeResponsePrivate(this), parent)
{
    setRequest(new RestoreDBClusterToPointInTimeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestoreDBClusterToPointInTimeRequest * RestoreDBClusterToPointInTimeResponse::request() const
{
    Q_D(const RestoreDBClusterToPointInTimeResponse);
    return static_cast<const RestoreDBClusterToPointInTimeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb RestoreDBClusterToPointInTime \a response.
 */
void RestoreDBClusterToPointInTimeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestoreDBClusterToPointInTimeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::RestoreDBClusterToPointInTimeResponsePrivate
 * \brief The RestoreDBClusterToPointInTimeResponsePrivate class provides private implementation for RestoreDBClusterToPointInTimeResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a RestoreDBClusterToPointInTimeResponsePrivate object with public implementation \a q.
 */
RestoreDBClusterToPointInTimeResponsePrivate::RestoreDBClusterToPointInTimeResponsePrivate(
    RestoreDBClusterToPointInTimeResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb RestoreDBClusterToPointInTime response element from \a xml.
 */
void RestoreDBClusterToPointInTimeResponsePrivate::parseRestoreDBClusterToPointInTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBClusterToPointInTimeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
