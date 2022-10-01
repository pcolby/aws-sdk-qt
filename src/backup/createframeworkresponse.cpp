// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createframeworkresponse.h"
#include "createframeworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::CreateFrameworkResponse
 * \brief The CreateFrameworkResponse class provides an interace for Backup CreateFramework responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::createFramework
 */

/*!
 * Constructs a CreateFrameworkResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFrameworkResponse::CreateFrameworkResponse(
        const CreateFrameworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new CreateFrameworkResponsePrivate(this), parent)
{
    setRequest(new CreateFrameworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFrameworkRequest * CreateFrameworkResponse::request() const
{
    Q_D(const CreateFrameworkResponse);
    return static_cast<const CreateFrameworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup CreateFramework \a response.
 */
void CreateFrameworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFrameworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::CreateFrameworkResponsePrivate
 * \brief The CreateFrameworkResponsePrivate class provides private implementation for CreateFrameworkResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a CreateFrameworkResponsePrivate object with public implementation \a q.
 */
CreateFrameworkResponsePrivate::CreateFrameworkResponsePrivate(
    CreateFrameworkResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup CreateFramework response element from \a xml.
 */
void CreateFrameworkResponsePrivate::parseCreateFrameworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFrameworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
