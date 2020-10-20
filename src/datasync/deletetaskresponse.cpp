/*
    Copyright 2013-2020 Paul Colby

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

#include "deletetaskresponse.h"
#include "deletetaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DeleteTaskResponse
 * \brief The DeleteTaskResponse class provides an interace for DataSync DeleteTask responses.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::deleteTask
 */

/*!
 * Constructs a DeleteTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTaskResponse::DeleteTaskResponse(
        const DeleteTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new DeleteTaskResponsePrivate(this), parent)
{
    setRequest(new DeleteTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTaskRequest * DeleteTaskResponse::request() const
{
    Q_D(const DeleteTaskResponse);
    return static_cast<const DeleteTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync DeleteTask \a response.
 */
void DeleteTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::DeleteTaskResponsePrivate
 * \brief The DeleteTaskResponsePrivate class provides private implementation for DeleteTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DeleteTaskResponsePrivate object with public implementation \a q.
 */
DeleteTaskResponsePrivate::DeleteTaskResponsePrivate(
    DeleteTaskResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync DeleteTask response element from \a xml.
 */
void DeleteTaskResponsePrivate::parseDeleteTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
