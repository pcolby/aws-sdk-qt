// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchangesetresponse.h"
#include "createchangesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::CreateChangeSetResponse
 * \brief The CreateChangeSetResponse class provides an interace for CloudFormation CreateChangeSet responses.
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
 * \sa CloudFormationClient::createChangeSet
 */

/*!
 * Constructs a CreateChangeSetResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChangeSetResponse::CreateChangeSetResponse(
        const CreateChangeSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new CreateChangeSetResponsePrivate(this), parent)
{
    setRequest(new CreateChangeSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChangeSetRequest * CreateChangeSetResponse::request() const
{
    Q_D(const CreateChangeSetResponse);
    return static_cast<const CreateChangeSetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation CreateChangeSet \a response.
 */
void CreateChangeSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChangeSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::CreateChangeSetResponsePrivate
 * \brief The CreateChangeSetResponsePrivate class provides private implementation for CreateChangeSetResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a CreateChangeSetResponsePrivate object with public implementation \a q.
 */
CreateChangeSetResponsePrivate::CreateChangeSetResponsePrivate(
    CreateChangeSetResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation CreateChangeSet response element from \a xml.
 */
void CreateChangeSetResponsePrivate::parseCreateChangeSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChangeSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
