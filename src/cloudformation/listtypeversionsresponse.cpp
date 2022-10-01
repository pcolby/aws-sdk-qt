// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtypeversionsresponse.h"
#include "listtypeversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListTypeVersionsResponse
 * \brief The ListTypeVersionsResponse class provides an interace for CloudFormation ListTypeVersions responses.
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
 * \sa CloudFormationClient::listTypeVersions
 */

/*!
 * Constructs a ListTypeVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListTypeVersionsResponse::ListTypeVersionsResponse(
        const ListTypeVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListTypeVersionsResponsePrivate(this), parent)
{
    setRequest(new ListTypeVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTypeVersionsRequest * ListTypeVersionsResponse::request() const
{
    Q_D(const ListTypeVersionsResponse);
    return static_cast<const ListTypeVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation ListTypeVersions \a response.
 */
void ListTypeVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTypeVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::ListTypeVersionsResponsePrivate
 * \brief The ListTypeVersionsResponsePrivate class provides private implementation for ListTypeVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ListTypeVersionsResponsePrivate object with public implementation \a q.
 */
ListTypeVersionsResponsePrivate::ListTypeVersionsResponsePrivate(
    ListTypeVersionsResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation ListTypeVersions response element from \a xml.
 */
void ListTypeVersionsResponsePrivate::parseListTypeVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTypeVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
