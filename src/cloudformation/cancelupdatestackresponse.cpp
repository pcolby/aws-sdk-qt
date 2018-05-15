/*
    Copyright 2013-2018 Paul Colby

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

#include "cancelupdatestackresponse.h"
#include "cancelupdatestackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::CancelUpdateStackResponse
 * \brief The CancelUpdateStackResponse class provides an interace for CloudFormation CancelUpdateStack responses.
 *
 * \inmodule QtAwsCloudFormation
 *
 *  <fullname>AWS CloudFormation</fullname>
 * 
 *  AWS CloudFormation allows you to create and manage AWS infrastructure deployments predictably and repeatedly. You can
 *  use AWS CloudFormation to leverage AWS products, such as Amazon Elastic Compute Cloud, Amazon Elastic Block Store,
 *  Amazon Simple Notification Service, Elastic Load Balancing, and Auto Scaling to build highly-reliable, highly scalable,
 *  cost-effective applications without creating or configuring the underlying AWS
 * 
 *  infrastructure>
 * 
 *  With AWS CloudFormation, you declare all of your resources and dependencies in a template file. The template defines a
 *  collection of resources as a single unit called a stack. AWS CloudFormation creates and deletes all member resources of
 *  the stack together and manages all dependencies between the resources for
 * 
 *  you>
 * 
 *  For more information about AWS CloudFormation, see the <a href="http://aws.amazon.com/cloudformation/">AWS
 *  CloudFormation Product
 * 
 *  Page</a>>
 * 
 *  Amazon CloudFormation makes use of other AWS products. If you need additional technical information about a specific AWS
 *  product, you can find the product's technical documentation at <a
 *
 * \sa CloudFormationClient::cancelUpdateStack
 */

/*!
 * Constructs a CancelUpdateStackResponse object for \a reply to \a request, with parent \a parent.
 */
CancelUpdateStackResponse::CancelUpdateStackResponse(
        const CancelUpdateStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new CancelUpdateStackResponsePrivate(this), parent)
{
    setRequest(new CancelUpdateStackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelUpdateStackRequest * CancelUpdateStackResponse::request() const
{
    Q_D(const CancelUpdateStackResponse);
    return static_cast<const CancelUpdateStackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation CancelUpdateStack \a response.
 */
void CancelUpdateStackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelUpdateStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::CancelUpdateStackResponsePrivate
 * \brief The CancelUpdateStackResponsePrivate class provides private implementation for CancelUpdateStackResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a CancelUpdateStackResponsePrivate object with public implementation \a q.
 */
CancelUpdateStackResponsePrivate::CancelUpdateStackResponsePrivate(
    CancelUpdateStackResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation CancelUpdateStack response element from \a xml.
 */
void CancelUpdateStackResponsePrivate::parseCancelUpdateStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelUpdateStackResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
