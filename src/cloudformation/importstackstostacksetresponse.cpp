// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importstackstostacksetresponse.h"
#include "importstackstostacksetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::ImportStacksToStackSetResponse
 * \brief The ImportStacksToStackSetResponse class provides an interace for CloudFormation ImportStacksToStackSet responses.
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
 * \sa CloudFormationClient::importStacksToStackSet
 */

/*!
 * Constructs a ImportStacksToStackSetResponse object for \a reply to \a request, with parent \a parent.
 */
ImportStacksToStackSetResponse::ImportStacksToStackSetResponse(
        const ImportStacksToStackSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new ImportStacksToStackSetResponsePrivate(this), parent)
{
    setRequest(new ImportStacksToStackSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportStacksToStackSetRequest * ImportStacksToStackSetResponse::request() const
{
    Q_D(const ImportStacksToStackSetResponse);
    return static_cast<const ImportStacksToStackSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation ImportStacksToStackSet \a response.
 */
void ImportStacksToStackSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportStacksToStackSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::ImportStacksToStackSetResponsePrivate
 * \brief The ImportStacksToStackSetResponsePrivate class provides private implementation for ImportStacksToStackSetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a ImportStacksToStackSetResponsePrivate object with public implementation \a q.
 */
ImportStacksToStackSetResponsePrivate::ImportStacksToStackSetResponsePrivate(
    ImportStacksToStackSetResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation ImportStacksToStackSet response element from \a xml.
 */
void ImportStacksToStackSetResponsePrivate::parseImportStacksToStackSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportStacksToStackSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
