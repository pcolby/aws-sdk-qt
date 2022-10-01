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

#include "updatelocationhdfsresponse.h"
#include "updatelocationhdfsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateLocationHdfsResponse
 * \brief The UpdateLocationHdfsResponse class provides an interace for DataSync UpdateLocationHdfs responses.
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
 * \sa DataSyncClient::updateLocationHdfs
 */

/*!
 * Constructs a UpdateLocationHdfsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLocationHdfsResponse::UpdateLocationHdfsResponse(
        const UpdateLocationHdfsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateLocationHdfsResponsePrivate(this), parent)
{
    setRequest(new UpdateLocationHdfsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLocationHdfsRequest * UpdateLocationHdfsResponse::request() const
{
    Q_D(const UpdateLocationHdfsResponse);
    return static_cast<const UpdateLocationHdfsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateLocationHdfs \a response.
 */
void UpdateLocationHdfsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLocationHdfsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateLocationHdfsResponsePrivate
 * \brief The UpdateLocationHdfsResponsePrivate class provides private implementation for UpdateLocationHdfsResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateLocationHdfsResponsePrivate object with public implementation \a q.
 */
UpdateLocationHdfsResponsePrivate::UpdateLocationHdfsResponsePrivate(
    UpdateLocationHdfsResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateLocationHdfs response element from \a xml.
 */
void UpdateLocationHdfsResponsePrivate::parseUpdateLocationHdfsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLocationHdfsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
