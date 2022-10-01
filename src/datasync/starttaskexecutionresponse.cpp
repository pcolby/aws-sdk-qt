// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttaskexecutionresponse.h"
#include "starttaskexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::StartTaskExecutionResponse
 * \brief The StartTaskExecutionResponse class provides an interace for DataSync StartTaskExecution responses.
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
 * \sa DataSyncClient::startTaskExecution
 */

/*!
 * Constructs a StartTaskExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StartTaskExecutionResponse::StartTaskExecutionResponse(
        const StartTaskExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new StartTaskExecutionResponsePrivate(this), parent)
{
    setRequest(new StartTaskExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartTaskExecutionRequest * StartTaskExecutionResponse::request() const
{
    Q_D(const StartTaskExecutionResponse);
    return static_cast<const StartTaskExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync StartTaskExecution \a response.
 */
void StartTaskExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartTaskExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::StartTaskExecutionResponsePrivate
 * \brief The StartTaskExecutionResponsePrivate class provides private implementation for StartTaskExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a StartTaskExecutionResponsePrivate object with public implementation \a q.
 */
StartTaskExecutionResponsePrivate::StartTaskExecutionResponsePrivate(
    StartTaskExecutionResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync StartTaskExecution response element from \a xml.
 */
void StartTaskExecutionResponsePrivate::parseStartTaskExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTaskExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
