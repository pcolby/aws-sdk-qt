// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclustersresponse.h"
#include "listclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecs {

/*!
 * \class QtAws::Ecs::ListClustersResponse
 * \brief The ListClustersResponse class provides an interace for Ecs ListClusters responses.
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
 * \sa EcsClient::listClusters
 */

/*!
 * Constructs a ListClustersResponse object for \a reply to \a request, with parent \a parent.
 */
ListClustersResponse::ListClustersResponse(
        const ListClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcsResponse(new ListClustersResponsePrivate(this), parent)
{
    setRequest(new ListClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClustersRequest * ListClustersResponse::request() const
{
    Q_D(const ListClustersResponse);
    return static_cast<const ListClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecs ListClusters \a response.
 */
void ListClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecs::ListClustersResponsePrivate
 * \brief The ListClustersResponsePrivate class provides private implementation for ListClustersResponse.
 * \internal
 *
 * \inmodule QtAwsEcs
 */

/*!
 * Constructs a ListClustersResponsePrivate object with public implementation \a q.
 */
ListClustersResponsePrivate::ListClustersResponsePrivate(
    ListClustersResponse * const q) : EcsResponsePrivate(q)
{

}

/*!
 * Parses a Ecs ListClusters response element from \a xml.
 */
void ListClustersResponsePrivate::parseListClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecs
} // namespace QtAws
