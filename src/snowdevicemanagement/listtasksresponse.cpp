// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtasksresponse.h"
#include "listtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::ListTasksResponse
 * \brief The ListTasksResponse class provides an interace for SnowDeviceManagement ListTasks responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::listTasks
 */

/*!
 * Constructs a ListTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListTasksResponse::ListTasksResponse(
        const ListTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowDeviceManagementResponse(new ListTasksResponsePrivate(this), parent)
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
 * Parses a successful SnowDeviceManagement ListTasks \a response.
 */
void ListTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SnowDeviceManagement::ListTasksResponsePrivate
 * \brief The ListTasksResponsePrivate class provides private implementation for ListTasksResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a ListTasksResponsePrivate object with public implementation \a q.
 */
ListTasksResponsePrivate::ListTasksResponsePrivate(
    ListTasksResponse * const q) : SnowDeviceManagementResponsePrivate(q)
{

}

/*!
 * Parses a SnowDeviceManagement ListTasks response element from \a xml.
 */
void ListTasksResponsePrivate::parseListTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SnowDeviceManagement
} // namespace QtAws
