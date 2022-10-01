// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
