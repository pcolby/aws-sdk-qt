// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copybackupresponse.h"
#include "copybackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CopyBackupResponse
 * \brief The CopyBackupResponse class provides an interace for FSx CopyBackup responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::copyBackup
 */

/*!
 * Constructs a CopyBackupResponse object for \a reply to \a request, with parent \a parent.
 */
CopyBackupResponse::CopyBackupResponse(
        const CopyBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CopyBackupResponsePrivate(this), parent)
{
    setRequest(new CopyBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyBackupRequest * CopyBackupResponse::request() const
{
    Q_D(const CopyBackupResponse);
    return static_cast<const CopyBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CopyBackup \a response.
 */
void CopyBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CopyBackupResponsePrivate
 * \brief The CopyBackupResponsePrivate class provides private implementation for CopyBackupResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CopyBackupResponsePrivate object with public implementation \a q.
 */
CopyBackupResponsePrivate::CopyBackupResponsePrivate(
    CopyBackupResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CopyBackup response element from \a xml.
 */
void CopyBackupResponsePrivate::parseCopyBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
