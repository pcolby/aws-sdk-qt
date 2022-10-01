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

#include "createvolumefrombackupresponse.h"
#include "createvolumefrombackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateVolumeFromBackupResponse
 * \brief The CreateVolumeFromBackupResponse class provides an interace for FSx CreateVolumeFromBackup responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createVolumeFromBackup
 */

/*!
 * Constructs a CreateVolumeFromBackupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVolumeFromBackupResponse::CreateVolumeFromBackupResponse(
        const CreateVolumeFromBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateVolumeFromBackupResponsePrivate(this), parent)
{
    setRequest(new CreateVolumeFromBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVolumeFromBackupRequest * CreateVolumeFromBackupResponse::request() const
{
    Q_D(const CreateVolumeFromBackupResponse);
    return static_cast<const CreateVolumeFromBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CreateVolumeFromBackup \a response.
 */
void CreateVolumeFromBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVolumeFromBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateVolumeFromBackupResponsePrivate
 * \brief The CreateVolumeFromBackupResponsePrivate class provides private implementation for CreateVolumeFromBackupResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateVolumeFromBackupResponsePrivate object with public implementation \a q.
 */
CreateVolumeFromBackupResponsePrivate::CreateVolumeFromBackupResponsePrivate(
    CreateVolumeFromBackupResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateVolumeFromBackup response element from \a xml.
 */
void CreateVolumeFromBackupResponsePrivate::parseCreateVolumeFromBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVolumeFromBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
