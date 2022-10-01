// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontainerinstancesstateresponse.h"
#include "updatecontainerinstancesstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::UpdateContainerInstancesStateResponse
 * \brief The UpdateContainerInstancesStateResponse class provides an interace for Ecs UpdateContainerInstancesState responses.
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
 * \sa EcsClient::updateContainerInstancesState
 */

/*!
 * Constructs a UpdateContainerInstancesStateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContainerInstancesStateResponse::UpdateContainerInstancesStateResponse(
        const UpdateContainerInstancesStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new UpdateContainerInstancesStateResponsePrivate(this), parent)
{
    setRequest(new UpdateContainerInstancesStateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContainerInstancesStateRequest * UpdateContainerInstancesStateResponse::request() const
{
    Q_D(const UpdateContainerInstancesStateResponse);
    return static_cast<const UpdateContainerInstancesStateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecs UpdateContainerInstancesState \a response.
 */
void UpdateContainerInstancesStateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContainerInstancesStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecs::UpdateContainerInstancesStateResponsePrivate
 * \brief The UpdateContainerInstancesStateResponsePrivate class provides private implementation for UpdateContainerInstancesStateResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a UpdateContainerInstancesStateResponsePrivate object with public implementation \a q.
 */
UpdateContainerInstancesStateResponsePrivate::UpdateContainerInstancesStateResponsePrivate(
    UpdateContainerInstancesStateResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a Ecs UpdateContainerInstancesState response element from \a xml.
 */
void UpdateContainerInstancesStateResponsePrivate::parseUpdateContainerInstancesStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContainerInstancesStateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecs
} // namespace QtAws
