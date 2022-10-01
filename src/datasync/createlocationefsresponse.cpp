// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationefsresponse.h"
#include "createlocationefsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationEfsResponse
 * \brief The CreateLocationEfsResponse class provides an interace for DataSync CreateLocationEfs responses.
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
 * \sa DataSyncClient::createLocationEfs
 */

/*!
 * Constructs a CreateLocationEfsResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationEfsResponse::CreateLocationEfsResponse(
        const CreateLocationEfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationEfsResponsePrivate(this), parent)
{
    setRequest(new CreateLocationEfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationEfsRequest * CreateLocationEfsResponse::request() const
{
    Q_D(const CreateLocationEfsResponse);
    return static_cast<const CreateLocationEfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationEfs \a response.
 */
void CreateLocationEfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationEfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationEfsResponsePrivate
 * \brief The CreateLocationEfsResponsePrivate class provides private implementation for CreateLocationEfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationEfsResponsePrivate object with public implementation \a q.
 */
CreateLocationEfsResponsePrivate::CreateLocationEfsResponsePrivate(
    CreateLocationEfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationEfs response element from \a xml.
 */
void CreateLocationEfsResponsePrivate::parseCreateLocationEfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationEfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
