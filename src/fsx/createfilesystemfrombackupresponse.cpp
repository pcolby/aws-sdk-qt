// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfilesystemfrombackupresponse.h"
#include "createfilesystemfrombackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateFileSystemFromBackupResponse
 * \brief The CreateFileSystemFromBackupResponse class provides an interace for FSx CreateFileSystemFromBackup responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createFileSystemFromBackup
 */

/*!
 * Constructs a CreateFileSystemFromBackupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFileSystemFromBackupResponse::CreateFileSystemFromBackupResponse(
        const CreateFileSystemFromBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateFileSystemFromBackupResponsePrivate(this), parent)
{
    setRequest(new CreateFileSystemFromBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFileSystemFromBackupRequest * CreateFileSystemFromBackupResponse::request() const
{
    Q_D(const CreateFileSystemFromBackupResponse);
    return static_cast<const CreateFileSystemFromBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CreateFileSystemFromBackup \a response.
 */
void CreateFileSystemFromBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFileSystemFromBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateFileSystemFromBackupResponsePrivate
 * \brief The CreateFileSystemFromBackupResponsePrivate class provides private implementation for CreateFileSystemFromBackupResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateFileSystemFromBackupResponsePrivate object with public implementation \a q.
 */
CreateFileSystemFromBackupResponsePrivate::CreateFileSystemFromBackupResponsePrivate(
    CreateFileSystemFromBackupResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateFileSystemFromBackup response element from \a xml.
 */
void CreateFileSystemFromBackupResponsePrivate::parseCreateFileSystemFromBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFileSystemFromBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
