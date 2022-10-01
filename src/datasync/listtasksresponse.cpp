// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtasksresponse.h"
#include "listtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::ListTasksResponse
 * \brief The ListTasksResponse class provides an interace for DataSync ListTasks responses.
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
 * \sa DataSyncClient::listTasks
 */

/*!
 * Constructs a ListTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListTasksResponse::ListTasksResponse(
        const ListTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new ListTasksResponsePrivate(this), parent)
{
    setRequest(new ListTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTasksRequest * ListTasksResponse::request() const
{
    Q_D(const ListTasksResponse);
    return static_cast<const ListTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync ListTasks \a response.
 */
void ListTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::ListTasksResponsePrivate
 * \brief The ListTasksResponsePrivate class provides private implementation for ListTasksResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a ListTasksResponsePrivate object with public implementation \a q.
 */
ListTasksResponsePrivate::ListTasksResponsePrivate(
    ListTasksResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync ListTasks response element from \a xml.
 */
void ListTasksResponsePrivate::parseListTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
