// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopstacksetoperationresponse.h"
#include "stopstacksetoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::StopStackSetOperationResponse
 * \brief The StopStackSetOperationResponse class provides an interace for CloudFormation StopStackSetOperation responses.
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
 * \sa CloudFormationClient::stopStackSetOperation
 */

/*!
 * Constructs a StopStackSetOperationResponse object for \a reply to \a request, with parent \a parent.
 */
StopStackSetOperationResponse::StopStackSetOperationResponse(
        const StopStackSetOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new StopStackSetOperationResponsePrivate(this), parent)
{
    setRequest(new StopStackSetOperationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopStackSetOperationRequest * StopStackSetOperationResponse::request() const
{
    Q_D(const StopStackSetOperationResponse);
    return static_cast<const StopStackSetOperationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation StopStackSetOperation \a response.
 */
void StopStackSetOperationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopStackSetOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::StopStackSetOperationResponsePrivate
 * \brief The StopStackSetOperationResponsePrivate class provides private implementation for StopStackSetOperationResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a StopStackSetOperationResponsePrivate object with public implementation \a q.
 */
StopStackSetOperationResponsePrivate::StopStackSetOperationResponsePrivate(
    StopStackSetOperationResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation StopStackSetOperation response element from \a xml.
 */
void StopStackSetOperationResponsePrivate::parseStopStackSetOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStackSetOperationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
