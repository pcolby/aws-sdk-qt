// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationsmbresponse.h"
#include "createlocationsmbresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationSmbResponse
 * \brief The CreateLocationSmbResponse class provides an interace for DataSync CreateLocationSmb responses.
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
 * \sa DataSyncClient::createLocationSmb
 */

/*!
 * Constructs a CreateLocationSmbResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationSmbResponse::CreateLocationSmbResponse(
        const CreateLocationSmbRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationSmbResponsePrivate(this), parent)
{
    setRequest(new CreateLocationSmbRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationSmbRequest * CreateLocationSmbResponse::request() const
{
    Q_D(const CreateLocationSmbResponse);
    return static_cast<const CreateLocationSmbRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationSmb \a response.
 */
void CreateLocationSmbResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationSmbResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationSmbResponsePrivate
 * \brief The CreateLocationSmbResponsePrivate class provides private implementation for CreateLocationSmbResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationSmbResponsePrivate object with public implementation \a q.
 */
CreateLocationSmbResponsePrivate::CreateLocationSmbResponsePrivate(
    CreateLocationSmbResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationSmb response element from \a xml.
 */
void CreateLocationSmbResponsePrivate::parseCreateLocationSmbResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationSmbResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
