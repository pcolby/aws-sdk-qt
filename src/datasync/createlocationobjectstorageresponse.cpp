// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
