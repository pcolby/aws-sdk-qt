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

#include "executecommandresponse.h"
#include "executecommandresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::ExecuteCommandResponse
 * \brief The ExecuteCommandResponse class provides an interace for Ecs ExecuteCommand responses.
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
 * \sa EcsClient::executeCommand
 */

/*!
 * Constructs a ExecuteCommandResponse object for \a reply to \a request, with parent \a parent.
 */
ExecuteCommandResponse::ExecuteCommandResponse(
        const ExecuteCommandRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new ExecuteCommandResponsePrivate(this), parent)
{
    setRequest(new ExecuteCommandRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExecuteCommandRequest * ExecuteCommandResponse::request() const
{
    Q_D(const ExecuteCommandResponse);
    return static_cast<const ExecuteCommandRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecs ExecuteCommand \a response.
 */
void ExecuteCommandResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExecuteCommandResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecs::ExecuteCommandResponsePrivate
 * \brief The ExecuteCommandResponsePrivate class provides private implementation for ExecuteCommandResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a ExecuteCommandResponsePrivate object with public implementation \a q.
 */
ExecuteCommandResponsePrivate::ExecuteCommandResponsePrivate(
    ExecuteCommandResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a Ecs ExecuteCommand response element from \a xml.
 */
void ExecuteCommandResponsePrivate::parseExecuteCommandResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExecuteCommandResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecs
} // namespace QtAws
