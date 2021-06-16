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
 *  <fullname>AWS Backup</fullname>
 * 
 *  AWS Backup is a unified backup service designed to protect AWS services and their associated data. AWS Backup simplifies
 *  the creation, migration, restoration, and deletion of backups, while also providing reporting and
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
