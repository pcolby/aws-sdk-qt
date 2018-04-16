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

#include "deletechangesetresponse.h"
#include "deletechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DeleteChangeSetResponse
 *
 * \brief The DeleteChangeSetResponse class encapsulates CloudFormation DeleteChangeSet responses.
 *
 * \ingroup CloudFormation
 *
 *  <fullname>AWS CloudFormation</fullname>
 * 
 *  AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 *  use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 *  Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 *  cost-effective applications without creating or configuring the underlying AWS
 * 
 *  infrastructure>
 * 
 *  With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 *  the stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 *  CloudFormation Product
 * 
 *  Page</a>>
 * 
 *  Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 *  product, you can find the product's technical documentation at <a
 *
 * \sa CloudFormationClient::deleteChangeSet
 */

/*!
 * @brief  Constructs a new DeleteChangeSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteChangeSetResponse::DeleteChangeSetResponse(
        const DeleteChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DeleteChangeSetResponsePrivate(this), parent)
{
    setRequest(new DeleteChangeSetRequest(request));
    setReply(reply);
}

const DeleteChangeSetRequest * DeleteChangeSetResponse::request() const
{
    Q_D(const DeleteChangeSetResponse);
    return static_cast<const DeleteChangeSetRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFormation DeleteChangeSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteChangeSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteChangeSetResponsePrivate
 *
 * \brief Private implementation for DeleteChangeSetResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteChangeSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteChangeSetResponse instance.
 */
DeleteChangeSetResponsePrivate::DeleteChangeSetResponsePrivate(
    DeleteChangeSetResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFormation DeleteChangeSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteChangeSetResponsePrivate::parseDeleteChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteChangeSetResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
