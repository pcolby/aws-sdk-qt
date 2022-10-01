// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceltaskexecutionresponse.h"
#include "canceltaskexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CancelTaskExecutionResponse
 * \brief The CancelTaskExecutionResponse class provides an interace for DataSync CancelTaskExecution responses.
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
 * \sa DataSyncClient::cancelTaskExecution
 */

/*!
 * Constructs a CancelTaskExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
CancelTaskExecutionResponse::CancelTaskExecutionResponse(
        const CancelTaskExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CancelTaskExecutionResponsePrivate(this), parent)
{
    setRequest(new CancelTaskExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelTaskExecutionRequest * CancelTaskExecutionResponse::request() const
{
    Q_D(const CancelTaskExecutionResponse);
    return static_cast<const CancelTaskExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CancelTaskExecution \a response.
 */
void CancelTaskExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelTaskExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CancelTaskExecutionResponsePrivate
 * \brief The CancelTaskExecutionResponsePrivate class provides private implementation for CancelTaskExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CancelTaskExecutionResponsePrivate object with public implementation \a q.
 */
CancelTaskExecutionResponsePrivate::CancelTaskExecutionResponsePrivate(
    CancelTaskExecutionResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CancelTaskExecution response element from \a xml.
 */
void CancelTaskExecutionResponsePrivate::parseCancelTaskExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelTaskExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
