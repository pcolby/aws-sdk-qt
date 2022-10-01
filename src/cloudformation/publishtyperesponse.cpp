// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishtyperesponse.h"
#include "publishtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::PublishTypeResponse
 * \brief The PublishTypeResponse class provides an interace for CloudFormation PublishType responses.
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
 * \sa CloudFormationClient::publishType
 */

/*!
 * Constructs a PublishTypeResponse object for \a reply to \a request, with parent \a parent.
 */
PublishTypeResponse::PublishTypeResponse(
        const PublishTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new PublishTypeResponsePrivate(this), parent)
{
    setRequest(new PublishTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PublishTypeRequest * PublishTypeResponse::request() const
{
    Q_D(const PublishTypeResponse);
    return static_cast<const PublishTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation PublishType \a response.
 */
void PublishTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PublishTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::PublishTypeResponsePrivate
 * \brief The PublishTypeResponsePrivate class provides private implementation for PublishTypeResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a PublishTypeResponsePrivate object with public implementation \a q.
 */
PublishTypeResponsePrivate::PublishTypeResponsePrivate(
    PublishTypeResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation PublishType response element from \a xml.
 */
void PublishTypeResponsePrivate::parsePublishTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PublishTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
