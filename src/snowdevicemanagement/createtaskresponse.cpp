// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtaskresponse.h"
#include "createtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::CreateTaskResponse
 * \brief The CreateTaskResponse class provides an interace for SnowDeviceManagement CreateTask responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::createTask
 */

/*!
 * Constructs a CreateTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTaskResponse::CreateTaskResponse(
        const CreateTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowDeviceManagementResponse(new CreateTaskResponsePrivate(this), parent)
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
 * Parses a successful SnowDeviceManagement CreateTask \a response.
 */
void CreateTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SnowDeviceManagement::CreateTaskResponsePrivate
 * \brief The CreateTaskResponsePrivate class provides private implementation for CreateTaskResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a CreateTaskResponsePrivate object with public implementation \a q.
 */
CreateTaskResponsePrivate::CreateTaskResponsePrivate(
    CreateTaskResponse * const q) : SnowDeviceManagementResponsePrivate(q)
{

}

/*!
 * Parses a SnowDeviceManagement CreateTask response element from \a xml.
 */
void CreateTaskResponsePrivate::parseCreateTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SnowDeviceManagement
} // namespace QtAws
