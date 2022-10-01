// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetaskexecutionresponse.h"
#include "updatetaskexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateTaskExecutionResponse
 * \brief The UpdateTaskExecutionResponse class provides an interace for DataSync UpdateTaskExecution responses.
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
 * \sa DataSyncClient::updateTaskExecution
 */

/*!
 * Constructs a UpdateTaskExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTaskExecutionResponse::UpdateTaskExecutionResponse(
        const UpdateTaskExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new UpdateTaskExecutionResponsePrivate(this), parent)
{
    setRequest(new UpdateTaskExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTaskExecutionRequest * UpdateTaskExecutionResponse::request() const
{
    Q_D(const UpdateTaskExecutionResponse);
    return static_cast<const UpdateTaskExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync UpdateTaskExecution \a response.
 */
void UpdateTaskExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTaskExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::UpdateTaskExecutionResponsePrivate
 * \brief The UpdateTaskExecutionResponsePrivate class provides private implementation for UpdateTaskExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateTaskExecutionResponsePrivate object with public implementation \a q.
 */
UpdateTaskExecutionResponsePrivate::UpdateTaskExecutionResponsePrivate(
    UpdateTaskExecutionResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync UpdateTaskExecution response element from \a xml.
 */
void UpdateTaskExecutionResponsePrivate::parseUpdateTaskExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTaskExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
