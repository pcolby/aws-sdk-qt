// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtasksresponse.h"
#include "listtasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::ListTasksResponse
 * \brief The ListTasksResponse class provides an interace for Ecs ListTasks responses.
 *
 * \inmodule QtAwsEcs
 *
 *  <fullname>Amazon Elastic Container Service</fullname>
 * 
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service. It makes it easy
 *  to run, stop, and manage Docker containers. You can host your cluster on a serverless infrastructure that's managed by
 *  Amazon ECS by launching your services or tasks on Fargate. For more control, you can host your tasks on a cluster of
 *  Amazon Elastic Compute Cloud (Amazon EC2) or External (on-premises) instances that you
 * 
 *  manage>
 * 
 *  Amazon ECS makes it easy to launch and stop container-based applications with simple API calls. This makes it easy to
 *  get the state of your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. With Amazon ECS, you don't need to operate your own cluster
 *  management and configuration management systems. You also don't need to worry about scaling your management
 *
 * \sa EcsClient::listTasks
 */

/*!
 * Constructs a ListTasksResponse object for \a reply to \a request, with parent \a parent.
 */
ListTasksResponse::ListTasksResponse(
        const ListTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new ListTasksResponsePrivate(this), parent)
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
 * Parses a successful Ecs ListTasks \a response.
 */
void ListTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecs::ListTasksResponsePrivate
 * \brief The ListTasksResponsePrivate class provides private implementation for ListTasksResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a ListTasksResponsePrivate object with public implementation \a q.
 */
ListTasksResponsePrivate::ListTasksResponsePrivate(
    ListTasksResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a Ecs ListTasks response element from \a xml.
 */
void ListTasksResponsePrivate::parseListTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecs
} // namespace QtAws
