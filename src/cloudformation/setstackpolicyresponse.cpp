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

#include "setstackpolicyresponse.h"
#include "setstackpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::SetStackPolicyResponse
 *
 * \brief The SetStackPolicyResponse class provides an interace for CloudFormation SetStackPolicy responses.
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
 * \sa CloudFormationClient::setStackPolicy
 */

/*!
 * @brief  Constructs a new SetStackPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetStackPolicyResponse::SetStackPolicyResponse(
        const SetStackPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new SetStackPolicyResponsePrivate(this), parent)
{
    setRequest(new SetStackPolicyRequest(request));
    setReply(reply);
}

const SetStackPolicyRequest * SetStackPolicyResponse::request() const
{
    Q_D(const SetStackPolicyResponse);
    return static_cast<const SetStackPolicyRequest *>(d->request);
}

/*!
 * @brief  Parse a CloudFormation SetStackPolicy response.
 *
 * @param  response  Response to parse.
 */
void SetStackPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetStackPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class SetStackPolicyResponsePrivate
 *
 * \brief Private implementation for SetStackPolicyResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SetStackPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetStackPolicyResponse instance.
 */
SetStackPolicyResponsePrivate::SetStackPolicyResponsePrivate(
    SetStackPolicyResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CloudFormation SetStackPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetStackPolicyResponsePrivate::parseSetStackPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetStackPolicyResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
