// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describestacksresponse.h"
#include "describestacksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::DescribeStacksResponse
 * \brief The DescribeStacksResponse class provides an interace for CloudFormation DescribeStacks responses.
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
 * \sa CloudFormationClient::describeStacks
 */

/*!
 * Constructs a DescribeStacksResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStacksResponse::DescribeStacksResponse(
        const DescribeStacksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DescribeStacksResponsePrivate(this), parent)
{
    setRequest(new DescribeStacksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStacksRequest * DescribeStacksResponse::request() const
{
    Q_D(const DescribeStacksResponse);
    return static_cast<const DescribeStacksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation DescribeStacks \a response.
 */
void DescribeStacksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStacksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::DescribeStacksResponsePrivate
 * \brief The DescribeStacksResponsePrivate class provides private implementation for DescribeStacksResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a DescribeStacksResponsePrivate object with public implementation \a q.
 */
DescribeStacksResponsePrivate::DescribeStacksResponsePrivate(
    DescribeStacksResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation DescribeStacks response element from \a xml.
 */
void DescribeStacksResponsePrivate::parseDescribeStacksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStacksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
