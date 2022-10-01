// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackupresponse.h"
#include "createbackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateBackupResponse
 * \brief The CreateBackupResponse class provides an interace for FSx CreateBackup responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createBackup
 */

/*!
 * Constructs a CreateBackupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackupResponse::CreateBackupResponse(
        const CreateBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateBackupResponsePrivate(this), parent)
{
    setRequest(new CreateBackupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackupRequest * CreateBackupResponse::request() const
{
    Q_D(const CreateBackupResponse);
    return static_cast<const CreateBackupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CreateBackup \a response.
 */
void CreateBackupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateBackupResponsePrivate
 * \brief The CreateBackupResponsePrivate class provides private implementation for CreateBackupResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateBackupResponsePrivate object with public implementation \a q.
 */
CreateBackupResponsePrivate::CreateBackupResponsePrivate(
    CreateBackupResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateBackup response element from \a xml.
 */
void CreateBackupResponsePrivate::parseCreateBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
