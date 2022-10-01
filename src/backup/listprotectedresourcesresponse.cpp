// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprotectedresourcesresponse.h"
#include "listprotectedresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListProtectedResourcesResponse
 * \brief The ListProtectedResourcesResponse class provides an interace for Backup ListProtectedResources responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listProtectedResources
 */

/*!
 * Constructs a ListProtectedResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListProtectedResourcesResponse::ListProtectedResourcesResponse(
        const ListProtectedResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListProtectedResourcesResponsePrivate(this), parent)
{
    setRequest(new ListProtectedResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProtectedResourcesRequest * ListProtectedResourcesResponse::request() const
{
    Q_D(const ListProtectedResourcesResponse);
    return static_cast<const ListProtectedResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListProtectedResources \a response.
 */
void ListProtectedResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProtectedResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListProtectedResourcesResponsePrivate
 * \brief The ListProtectedResourcesResponsePrivate class provides private implementation for ListProtectedResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListProtectedResourcesResponsePrivate object with public implementation \a q.
 */
ListProtectedResourcesResponsePrivate::ListProtectedResourcesResponsePrivate(
    ListProtectedResourcesResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListProtectedResources response element from \a xml.
 */
void ListProtectedResourcesResponsePrivate::parseListProtectedResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProtectedResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
