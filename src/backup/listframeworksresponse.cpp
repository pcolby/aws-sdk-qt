// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listframeworksresponse.h"
#include "listframeworksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::ListFrameworksResponse
 * \brief The ListFrameworksResponse class provides an interace for Backup ListFrameworks responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::listFrameworks
 */

/*!
 * Constructs a ListFrameworksResponse object for \a reply to \a request, with parent \a parent.
 */
ListFrameworksResponse::ListFrameworksResponse(
        const ListFrameworksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new ListFrameworksResponsePrivate(this), parent)
{
    setRequest(new ListFrameworksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFrameworksRequest * ListFrameworksResponse::request() const
{
    Q_D(const ListFrameworksResponse);
    return static_cast<const ListFrameworksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup ListFrameworks \a response.
 */
void ListFrameworksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFrameworksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::ListFrameworksResponsePrivate
 * \brief The ListFrameworksResponsePrivate class provides private implementation for ListFrameworksResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a ListFrameworksResponsePrivate object with public implementation \a q.
 */
ListFrameworksResponsePrivate::ListFrameworksResponsePrivate(
    ListFrameworksResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup ListFrameworks response element from \a xml.
 */
void ListFrameworksResponsePrivate::parseListFrameworksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFrameworksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
