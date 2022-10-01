// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsupportedresourcetypesresponse.h"
#include "getsupportedresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Backup {

/*!
 * \class QtAws::Backup::GetSupportedResourceTypesResponse
 * \brief The GetSupportedResourceTypesResponse class provides an interace for Backup GetSupportedResourceTypes responses.
 *
 * \inmodule QtAwsBackup
 *
 *  <fullname>Backup</fullname>
 * 
 *  Backup is a unified backup service designed to protect Amazon Web Services services and their associated data. Backup
 *  simplifies the creation, migration, restoration, and deletion of backups, while also providing reporting and
 *
 * \sa BackupClient::getSupportedResourceTypes
 */

/*!
 * Constructs a GetSupportedResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSupportedResourceTypesResponse::GetSupportedResourceTypesResponse(
        const GetSupportedResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BackupResponse(new GetSupportedResourceTypesResponsePrivate(this), parent)
{
    setRequest(new GetSupportedResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSupportedResourceTypesRequest * GetSupportedResourceTypesResponse::request() const
{
    Q_D(const GetSupportedResourceTypesResponse);
    return static_cast<const GetSupportedResourceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Backup GetSupportedResourceTypes \a response.
 */
void GetSupportedResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSupportedResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Backup::GetSupportedResourceTypesResponsePrivate
 * \brief The GetSupportedResourceTypesResponsePrivate class provides private implementation for GetSupportedResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsBackup
 */

/*!
 * Constructs a GetSupportedResourceTypesResponsePrivate object with public implementation \a q.
 */
GetSupportedResourceTypesResponsePrivate::GetSupportedResourceTypesResponsePrivate(
    GetSupportedResourceTypesResponse * const q) : BackupResponsePrivate(q)
{

}

/*!
 * Parses a Backup GetSupportedResourceTypes response element from \a xml.
 */
void GetSupportedResourceTypesResponsePrivate::parseGetSupportedResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSupportedResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Backup
} // namespace QtAws
