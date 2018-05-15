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

#include "liststacksetoperationsresponse.h"
#include "liststacksetoperationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListStackSetOperationsResponse
 * \brief The ListStackSetOperationsResponse class provides an interace for CloudFormation ListStackSetOperations responses.
 *
 * \inmodule QtAwsCloudFormation
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
 * \sa CloudFormationClient::listStackSetOperations
 */

/*!
 * Constructs a ListStackSetOperationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStackSetOperationsResponse::ListStackSetOperationsResponse(
        const ListStackSetOperationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListStackSetOperationsResponsePrivate(this), parent)
{
    setRequest(new ListStackSetOperationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStackSetOperationsRequest * ListStackSetOperationsResponse::request() const
{
    Q_D(const ListStackSetOperationsResponse);
    return static_cast<const ListStackSetOperationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation ListStackSetOperations \a response.
 */
void ListStackSetOperationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStackSetOperationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::ListStackSetOperationsResponsePrivate
 * \brief The ListStackSetOperationsResponsePrivate class provides private implementation for ListStackSetOperationsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ListStackSetOperationsResponsePrivate object with public implementation \a q.
 */
ListStackSetOperationsResponsePrivate::ListStackSetOperationsResponsePrivate(
    ListStackSetOperationsResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation ListStackSetOperations response element from \a xml.
 */
void ListStackSetOperationsResponsePrivate::parseListStackSetOperationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStackSetOperationsResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
