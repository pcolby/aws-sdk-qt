// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrecoverypointsbyresourceresponse.h"
#include "listrecoverypointsbyresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceResponse
 * \brief The ListRecoveryPointsByResourceResponse class provides an interace for Backup ListRecoveryPointsByResource responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listRecoveryPointsByResource
 */

/*!
 * Constructs a ListRecoveryPointsByResourceResponse object for \a reply to \a request, with parent \a parent.
 */
ListRecoveryPointsByResourceResponse::ListRecoveryPointsByResourceResponse(
        const ListRecoveryPointsByResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListRecoveryPointsByResourceResponsePrivate(this), parent)
{
    setRequest(new ListRecoveryPointsByResourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRecoveryPointsByResourceRequest * ListRecoveryPointsByResourceResponse::request() const
{
    Q_D(const ListRecoveryPointsByResourceResponse);
    return static_cast<const ListRecoveryPointsByResourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListRecoveryPointsByResource \a response.
 */
void ListRecoveryPointsByResourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRecoveryPointsByResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListRecoveryPointsByResourceResponsePrivate
 * \brief The ListRecoveryPointsByResourceResponsePrivate class provides private implementation for ListRecoveryPointsByResourceResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListRecoveryPointsByResourceResponsePrivate object with public implementation \a q.
 */
ListRecoveryPointsByResourceResponsePrivate::ListRecoveryPointsByResourceResponsePrivate(
    ListRecoveryPointsByResourceResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListRecoveryPointsByResource response element from \a xml.
 */
void ListRecoveryPointsByResourceResponsePrivate::parseListRecoveryPointsByResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecoveryPointsByResourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
