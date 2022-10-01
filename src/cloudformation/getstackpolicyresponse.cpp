// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getstackpolicyresponse.h"
#include "getstackpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::GetStackPolicyResponse
 * \brief The GetStackPolicyResponse class provides an interace for CloudFormation GetStackPolicy responses.
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
 * \sa CloudFormationClient::getStackPolicy
 */

/*!
 * Constructs a GetStackPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetStackPolicyResponse::GetStackPolicyResponse(
        const GetStackPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new GetStackPolicyResponsePrivate(this), parent)
{
    setRequest(new GetStackPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStackPolicyRequest * GetStackPolicyResponse::request() const
{
    Q_D(const GetStackPolicyResponse);
    return static_cast<const GetStackPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation GetStackPolicy \a response.
 */
void GetStackPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStackPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::GetStackPolicyResponsePrivate
 * \brief The GetStackPolicyResponsePrivate class provides private implementation for GetStackPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a GetStackPolicyResponsePrivate object with public implementation \a q.
 */
GetStackPolicyResponsePrivate::GetStackPolicyResponsePrivate(
    GetStackPolicyResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation GetStackPolicy response element from \a xml.
 */
void GetStackPolicyResponsePrivate::parseGetStackPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStackPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
