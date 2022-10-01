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

#include "createlocationobjectstorageresponse.h"
#include "createlocationobjectstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationObjectStorageResponse
 * \brief The CreateLocationObjectStorageResponse class provides an interace for DataSync CreateLocationObjectStorage responses.
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
 * \sa DataSyncClient::createLocationObjectStorage
 */

/*!
 * Constructs a CreateLocationObjectStorageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationObjectStorageResponse::CreateLocationObjectStorageResponse(
        const CreateLocationObjectStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationObjectStorageResponsePrivate(this), parent)
{
    setRequest(new CreateLocationObjectStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationObjectStorageRequest * CreateLocationObjectStorageResponse::request() const
{
    Q_D(const CreateLocationObjectStorageResponse);
    return static_cast<const CreateLocationObjectStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationObjectStorage \a response.
 */
void CreateLocationObjectStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationObjectStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationObjectStorageResponsePrivate
 * \brief The CreateLocationObjectStorageResponsePrivate class provides private implementation for CreateLocationObjectStorageResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationObjectStorageResponsePrivate object with public implementation \a q.
 */
CreateLocationObjectStorageResponsePrivate::CreateLocationObjectStorageResponsePrivate(
    CreateLocationObjectStorageResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationObjectStorage response element from \a xml.
 */
void CreateLocationObjectStorageResponsePrivate::parseCreateLocationObjectStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationObjectStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
