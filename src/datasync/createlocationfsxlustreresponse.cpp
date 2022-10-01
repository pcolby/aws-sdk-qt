// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlocationfsxlustreresponse.h"
#include "createlocationfsxlustreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateLocationFsxLustreResponse
 * \brief The CreateLocationFsxLustreResponse class provides an interace for DataSync CreateLocationFsxLustre responses.
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
 * \sa DataSyncClient::createLocationFsxLustre
 */

/*!
 * Constructs a CreateLocationFsxLustreResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLocationFsxLustreResponse::CreateLocationFsxLustreResponse(
        const CreateLocationFsxLustreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateLocationFsxLustreResponsePrivate(this), parent)
{
    setRequest(new CreateLocationFsxLustreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLocationFsxLustreRequest * CreateLocationFsxLustreResponse::request() const
{
    Q_D(const CreateLocationFsxLustreResponse);
    return static_cast<const CreateLocationFsxLustreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateLocationFsxLustre \a response.
 */
void CreateLocationFsxLustreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLocationFsxLustreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateLocationFsxLustreResponsePrivate
 * \brief The CreateLocationFsxLustreResponsePrivate class provides private implementation for CreateLocationFsxLustreResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateLocationFsxLustreResponsePrivate object with public implementation \a q.
 */
CreateLocationFsxLustreResponsePrivate::CreateLocationFsxLustreResponsePrivate(
    CreateLocationFsxLustreResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateLocationFsxLustre response element from \a xml.
 */
void CreateLocationFsxLustreResponsePrivate::parseCreateLocationFsxLustreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLocationFsxLustreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
