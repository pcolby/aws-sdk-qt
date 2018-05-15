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

#include "describechangesetresponse.h"
#include "describechangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DescribeChangeSetResponse
 * \brief The DescribeChangeSetResponse class provides an interace for CloudFormation DescribeChangeSet responses.
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
 * \sa CloudFormationClient::describeChangeSet
 */

/*!
 * Constructs a DescribeChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeChangeSetResponse::DescribeChangeSetResponse(
        const DescribeChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeChangeSetResponsePrivate(this), parent)
{
    setRequest(new DescribeChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeChangeSetRequest * DescribeChangeSetResponse::request() const
{
    Q_D(const DescribeChangeSetResponse);
    return static_cast<const DescribeChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation DescribeChangeSet \a response.
 */
void DescribeChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::DescribeChangeSetResponsePrivate
 * \brief The DescribeChangeSetResponsePrivate class provides private implementation for DescribeChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a DescribeChangeSetResponsePrivate object with public implementation \a q.
 */
DescribeChangeSetResponsePrivate::DescribeChangeSetResponsePrivate(
    DescribeChangeSetResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation DescribeChangeSet response element from \a xml.
 */
void DescribeChangeSetResponsePrivate::parseDescribeChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeChangeSetResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
