// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtaskresponse.h"
#include "createtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateTaskResponse
 * \brief The CreateTaskResponse class provides an interace for DataSync CreateTask responses.
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
 * \sa DataSyncClient::createTask
 */

/*!
 * Constructs a CreateTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTaskResponse::CreateTaskResponse(
        const CreateTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataSyncResponse(new CreateTaskResponsePrivate(this), parent)
{
    setRequest(new CreateTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTaskRequest * CreateTaskResponse::request() const
{
    Q_D(const CreateTaskResponse);
    return static_cast<const CreateTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DataSync CreateTask \a response.
 */
void CreateTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DataSync::CreateTaskResponsePrivate
 * \brief The CreateTaskResponsePrivate class provides private implementation for CreateTaskResponse.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateTaskResponsePrivate object with public implementation \a q.
 */
CreateTaskResponsePrivate::CreateTaskResponsePrivate(
    CreateTaskResponse * const q) : DataSyncResponsePrivate(q)
{

}

/*!
 * Parses a DataSync CreateTask response element from \a xml.
 */
void CreateTaskResponsePrivate::parseCreateTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DataSync
} // namespace QtAws
