// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
