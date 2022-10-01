// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexportsresponse.h"
#include "listexportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ListExportsResponse
 * \brief The ListExportsResponse class provides an interace for CloudFormation ListExports responses.
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
 * \sa CloudFormationClient::listExports
 */

/*!
 * Constructs a ListExportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExportsResponse::ListExportsResponse(
        const ListExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ListExportsResponsePrivate(this), parent)
{
    setRequest(new ListExportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExportsRequest * ListExportsResponse::request() const
{
    Q_D(const ListExportsResponse);
    return static_cast<const ListExportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation ListExports \a response.
 */
void ListExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::ListExportsResponsePrivate
 * \brief The ListExportsResponsePrivate class provides private implementation for ListExportsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ListExportsResponsePrivate object with public implementation \a q.
 */
ListExportsResponsePrivate::ListExportsResponsePrivate(
    ListExportsResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation ListExports response element from \a xml.
 */
void ListExportsResponsePrivate::parseListExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
