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

#include "updateserviceprimarytasksetresponse.h"
#include "updateserviceprimarytasksetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::UpdateServicePrimaryTaskSetResponse
 * \brief The UpdateServicePrimaryTaskSetResponse class provides an interace for Ecs UpdateServicePrimaryTaskSet responses.
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
 * \sa EcsClient::updateServicePrimaryTaskSet
 */

/*!
 * Constructs a UpdateServicePrimaryTaskSetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateServicePrimaryTaskSetResponse::UpdateServicePrimaryTaskSetResponse(
        const UpdateServicePrimaryTaskSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new UpdateServicePrimaryTaskSetResponsePrivate(this), parent)
{
    setRequest(new UpdateServicePrimaryTaskSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateServicePrimaryTaskSetRequest * UpdateServicePrimaryTaskSetResponse::request() const
{
    Q_D(const UpdateServicePrimaryTaskSetResponse);
    return static_cast<const UpdateServicePrimaryTaskSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecs UpdateServicePrimaryTaskSet \a response.
 */
void UpdateServicePrimaryTaskSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateServicePrimaryTaskSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecs::UpdateServicePrimaryTaskSetResponsePrivate
 * \brief The UpdateServicePrimaryTaskSetResponsePrivate class provides private implementation for UpdateServicePrimaryTaskSetResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a UpdateServicePrimaryTaskSetResponsePrivate object with public implementation \a q.
 */
UpdateServicePrimaryTaskSetResponsePrivate::UpdateServicePrimaryTaskSetResponsePrivate(
    UpdateServicePrimaryTaskSetResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a Ecs UpdateServicePrimaryTaskSet response element from \a xml.
 */
void UpdateServicePrimaryTaskSetResponsePrivate::parseUpdateServicePrimaryTaskSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServicePrimaryTaskSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecs
} // namespace QtAws
