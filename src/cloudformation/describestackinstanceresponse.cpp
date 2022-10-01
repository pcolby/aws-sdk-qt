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

#include "describestackinstanceresponse.h"
#include "describestackinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DescribeStackInstanceResponse
 * \brief The DescribeStackInstanceResponse class provides an interace for CloudFormation DescribeStackInstance responses.
 *
 * \inmodule QtAwsCloudFormation
 *
 *  <fullname>CloudFormation</fullname>
 * 
 *  CloudFormation allows you to create and manage Amazon Web Services infrastructure deployments predictably and
 *  repeatedly. You can use CloudFormation to leverage Amazon Web Services products, such as Amazon Elastic Compute Cloud,
 *  Amazon Elastic Block Store, Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly
 *  reliable, highly scalable, cost-effective applications without creating or configuring the underlying Amazon Web
 *  Services
 * 
 *  infrastructure>
 * 
 *  With CloudFormation, you declare all your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. CloudFormation creates and deletes all member resources of the
 *  stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">CloudFormation
 *  product
 * 
 *  page</a>>
 * 
 *  CloudFormation makes use of other Amazon Web Services products. If you need additional technical information about a
 *  specific Amazon Web Services product, you can find the product's technical documentation at <a
 *  href="https://docs.aws.amazon.com/"> <code>docs.aws.amazon.com</code>
 *
 * \sa CloudFormationClient::describeStackInstance
 */

/*!
 * Constructs a DescribeStackInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStackInstanceResponse::DescribeStackInstanceResponse(
        const DescribeStackInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeStackInstanceResponsePrivate(this), parent)
{
    setRequest(new DescribeStackInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStackInstanceRequest * DescribeStackInstanceResponse::request() const
{
    Q_D(const DescribeStackInstanceResponse);
    return static_cast<const DescribeStackInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation DescribeStackInstance \a response.
 */
void DescribeStackInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStackInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::DescribeStackInstanceResponsePrivate
 * \brief The DescribeStackInstanceResponsePrivate class provides private implementation for DescribeStackInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a DescribeStackInstanceResponsePrivate object with public implementation \a q.
 */
DescribeStackInstanceResponsePrivate::DescribeStackInstanceResponsePrivate(
    DescribeStackInstanceResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation DescribeStackInstance response element from \a xml.
 */
void DescribeStackInstanceResponsePrivate::parseDescribeStackInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStackInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
