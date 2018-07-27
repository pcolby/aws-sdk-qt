/*
    Copyright 2013-2018 Paul Colby

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

#include "deregistertaskdefinitionresponse.h"
#include "deregistertaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::DeregisterTaskDefinitionResponse
 * \brief The DeregisterTaskDefinitionResponse class provides an interace for ECS DeregisterTaskDefinition responses.
 *
 * \inmodule QtAwsECS
 *
 *  Amazon Elastic Container Service (Amazon ECS) is a highly scalable, fast, container management service that makes it
 *  easy to run, stop, and manage Docker containers on a cluster. You can host your cluster on a serverless infrastructure
 *  that is managed by Amazon ECS by launching your services or tasks using the Fargate launch type. For more control, you
 *  can host your tasks on a cluster of Amazon Elastic Compute Cloud (Amazon EC2) instances that you manage by using the EC2
 *  launch type. For more information about launch types, see <a
 *  href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/launch_types.html">Amazon ECS Launch
 * 
 *  Types</a>>
 * 
 *  Amazon ECS lets you launch and stop container-based applications with simple API calls, allows you to get the state of
 *  your cluster from a centralized service, and gives you access to many familiar Amazon EC2
 * 
 *  features>
 * 
 *  You can use Amazon ECS to schedule the placement of containers across your cluster based on your resource needs,
 *  isolation policies, and availability requirements. Amazon ECS eliminates the need for you to operate your own cluster
 *  management and configuration management systems or worry about scaling your management
 *
 * \sa EcsClient::deregisterTaskDefinition
 */

/*!
 * Constructs a DeregisterTaskDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterTaskDefinitionResponse::DeregisterTaskDefinitionResponse(
        const DeregisterTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new DeregisterTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeregisterTaskDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterTaskDefinitionRequest * DeregisterTaskDefinitionResponse::request() const
{
    Q_D(const DeregisterTaskDefinitionResponse);
    return static_cast<const DeregisterTaskDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECS DeregisterTaskDefinition \a response.
 */
void DeregisterTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECS::DeregisterTaskDefinitionResponsePrivate
 * \brief The DeregisterTaskDefinitionResponsePrivate class provides private implementation for DeregisterTaskDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsECS
 */

/*!
 * Constructs a DeregisterTaskDefinitionResponsePrivate object with public implementation \a q.
 */
DeregisterTaskDefinitionResponsePrivate::DeregisterTaskDefinitionResponsePrivate(
    DeregisterTaskDefinitionResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a ECS DeregisterTaskDefinition response element from \a xml.
 */
void DeregisterTaskDefinitionResponsePrivate::parseDeregisterTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterTaskDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECS
} // namespace QtAws
