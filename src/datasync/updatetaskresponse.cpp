// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetaskresponse.h"
#include "updatetaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateTaskResponse
 * \brief The UpdateTaskResponse class provides an interace for DataSync UpdateTask responses.
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
 * \sa DataSyncClient::updateTask
 */

/*!
 * Constructs a UpdateTaskResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTaskResponse::UpdateTaskResponse(
        const UpdateTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateTaskResponsePrivate(this), parent)
{
    setRequest(new UpdateTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTaskRequest * UpdateTaskResponse::request() const
{
    Q_D(const UpdateTaskResponse);
    return static_cast<const UpdateTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateTask \a response.
 */
void UpdateTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateTaskResponsePrivate
 * \brief The UpdateTaskResponsePrivate class provides private implementation for UpdateTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateTaskResponsePrivate object with public implementation \a q.
 */
UpdateTaskResponsePrivate::UpdateTaskResponsePrivate(
    UpdateTaskResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateTask response element from \a xml.
 */
void UpdateTaskResponsePrivate::parseUpdateTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
