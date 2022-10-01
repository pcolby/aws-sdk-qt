/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deregistercontainerinstanceresponse.h"
#include "deregistercontainerinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::DeregisterContainerInstanceResponse
 * \brief The DeregisterContainerInstanceResponse class provides an interace for Ecs DeregisterContainerInstance responses.
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
 * \sa EcsClient::deregisterContainerInstance
 */

/*!
 * Constructs a DeregisterContainerInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterContainerInstanceResponse::DeregisterContainerInstanceResponse(
        const DeregisterContainerInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new DeregisterContainerInstanceResponsePrivate(this), parent)
{
    setRequest(new DeregisterContainerInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterContainerInstanceRequest * DeregisterContainerInstanceResponse::request() const
{
    Q_D(const DeregisterContainerInstanceResponse);
    return static_cast<const DeregisterContainerInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecs DeregisterContainerInstance \a response.
 */
void DeregisterContainerInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterContainerInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecs::DeregisterContainerInstanceResponsePrivate
 * \brief The DeregisterContainerInstanceResponsePrivate class provides private implementation for DeregisterContainerInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a DeregisterContainerInstanceResponsePrivate object with public implementation \a q.
 */
DeregisterContainerInstanceResponsePrivate::DeregisterContainerInstanceResponsePrivate(
    DeregisterContainerInstanceResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a Ecs DeregisterContainerInstance response element from \a xml.
 */
void DeregisterContainerInstanceResponsePrivate::parseDeregisterContainerInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterContainerInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecs
} // namespace QtAws
