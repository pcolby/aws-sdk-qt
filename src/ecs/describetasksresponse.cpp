/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describetasksresponse.h"
#include "describetasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECS {

/*!
 * \class QtAws::ECS::DescribeTasksResponse
 *
 * \brief The DescribeTasksResponse class provides an interace for ECS DescribeTasks responses.
 *
 * \ingroup ECS
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
 * \sa ECSClient::describeTasks
 */

/*!
 * @brief  Constructs a new DescribeTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTasksResponse::DescribeTasksResponse(
        const DescribeTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new DescribeTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeTasksRequest(request));
    setReply(reply);
}

const DescribeTasksRequest * DescribeTasksResponse::request() const
{
    Q_D(const DescribeTasksResponse);
    return static_cast<const DescribeTasksRequest *>(d->request);
}

/*!
 * @brief  Parse a ECS DescribeTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeTasksResponsePrivate
 *
 * \brief Private implementation for DescribeTasksResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTasksResponse instance.
 */
DescribeTasksResponsePrivate::DescribeTasksResponsePrivate(
    DescribeTasksResponse * const q) : ECSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ECS DescribeTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTasksResponsePrivate::parseDescribeTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTasksResponse"));
    /// @todo
}

} // namespace ECS
} // namespace QtAws
