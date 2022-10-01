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

#include "updatelocationobjectstorageresponse.h"
#include "updatelocationobjectstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationObjectStorageResponse
 * \brief The UpdateLocationObjectStorageResponse class provides an interace for DataSync UpdateLocationObjectStorage responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::updateLocationObjectStorage
 */

/*!
 * Constructs a UpdateLocationObjectStorageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLocationObjectStorageResponse::UpdateLocationObjectStorageResponse(
        const UpdateLocationObjectStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateLocationObjectStorageResponsePrivate(this), parent)
{
    setRequest(new UpdateLocationObjectStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLocationObjectStorageRequest * UpdateLocationObjectStorageResponse::request() const
{
    Q_D(const UpdateLocationObjectStorageResponse);
    return static_cast<const UpdateLocationObjectStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateLocationObjectStorage \a response.
 */
void UpdateLocationObjectStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLocationObjectStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateLocationObjectStorageResponsePrivate
 * \brief The UpdateLocationObjectStorageResponsePrivate class provides private implementation for UpdateLocationObjectStorageResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationObjectStorageResponsePrivate object with public implementation \a q.
 */
UpdateLocationObjectStorageResponsePrivate::UpdateLocationObjectStorageResponsePrivate(
    UpdateLocationObjectStorageResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateLocationObjectStorage response element from \a xml.
 */
void UpdateLocationObjectStorageResponsePrivate::parseUpdateLocationObjectStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLocationObjectStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
