// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelocationnfsresponse.h"
#include "updatelocationnfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationNfsResponse
 * \brief The UpdateLocationNfsResponse class provides an interace for DataSync UpdateLocationNfs responses.
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
 * \sa DataSyncClient::updateLocationNfs
 */

/*!
 * Constructs a UpdateLocationNfsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLocationNfsResponse::UpdateLocationNfsResponse(
        const UpdateLocationNfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateLocationNfsResponsePrivate(this), parent)
{
    setRequest(new UpdateLocationNfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLocationNfsRequest * UpdateLocationNfsResponse::request() const
{
    Q_D(const UpdateLocationNfsResponse);
    return static_cast<const UpdateLocationNfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateLocationNfs \a response.
 */
void UpdateLocationNfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLocationNfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateLocationNfsResponsePrivate
 * \brief The UpdateLocationNfsResponsePrivate class provides private implementation for UpdateLocationNfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationNfsResponsePrivate object with public implementation \a q.
 */
UpdateLocationNfsResponsePrivate::UpdateLocationNfsResponsePrivate(
    UpdateLocationNfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateLocationNfs response element from \a xml.
 */
void UpdateLocationNfsResponsePrivate::parseUpdateLocationNfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLocationNfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
