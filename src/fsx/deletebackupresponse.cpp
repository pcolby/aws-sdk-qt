// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackupresponse.h"
#include "deletebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteBackupResponse
 * \brief The DeleteBackupResponse class provides an interace for FSx DeleteBackup responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteBackup
 */

/*!
 * Constructs a DeleteBackupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackupResponse::DeleteBackupResponse(
        const DeleteBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DeleteBackupResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackupRequest * DeleteBackupResponse::request() const
{
    Q_D(const DeleteBackupResponse);
    return static_cast<const DeleteBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DeleteBackup \a response.
 */
void DeleteBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DeleteBackupResponsePrivate
 * \brief The DeleteBackupResponsePrivate class provides private implementation for DeleteBackupResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteBackupResponsePrivate object with public implementation \a q.
 */
DeleteBackupResponsePrivate::DeleteBackupResponsePrivate(
    DeleteBackupResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DeleteBackup response element from \a xml.
 */
void DeleteBackupResponsePrivate::parseDeleteBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
