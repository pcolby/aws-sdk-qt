// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelocationsmbresponse.h"
#include "updatelocationsmbresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationSmbResponse
 * \brief The UpdateLocationSmbResponse class provides an interace for DataSync UpdateLocationSmb responses.
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
 * \sa DataSyncClient::updateLocationSmb
 */

/*!
 * Constructs a UpdateLocationSmbResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLocationSmbResponse::UpdateLocationSmbResponse(
        const UpdateLocationSmbRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateLocationSmbResponsePrivate(this), parent)
{
    setRequest(new UpdateLocationSmbRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLocationSmbRequest * UpdateLocationSmbResponse::request() const
{
    Q_D(const UpdateLocationSmbResponse);
    return static_cast<const UpdateLocationSmbRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateLocationSmb \a response.
 */
void UpdateLocationSmbResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLocationSmbResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateLocationSmbResponsePrivate
 * \brief The UpdateLocationSmbResponsePrivate class provides private implementation for UpdateLocationSmbResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationSmbResponsePrivate object with public implementation \a q.
 */
UpdateLocationSmbResponsePrivate::UpdateLocationSmbResponsePrivate(
    UpdateLocationSmbResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateLocationSmb response element from \a xml.
 */
void UpdateLocationSmbResponsePrivate::parseUpdateLocationSmbResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLocationSmbResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
