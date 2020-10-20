/*
    Copyright 2013-2020 Paul Colby

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
