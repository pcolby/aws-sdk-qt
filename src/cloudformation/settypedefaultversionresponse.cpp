/*
    Copyright 2013-2021 Paul Colby

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

#include "settypedefaultversionresponse.h"
#include "settypedefaultversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/*!
 * \class QtAws::CloudFormation::SetTypeDefaultVersionResponse
 * \brief The SetTypeDefaultVersionResponse class provides an interace for CloudFormation SetTypeDefaultVersion responses.
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
 * \sa CloudFormationClient::setTypeDefaultVersion
 */

/*!
 * Constructs a SetTypeDefaultVersionResponse object for \a reply to \a request, with parent \a parent.
 */
SetTypeDefaultVersionResponse::SetTypeDefaultVersionResponse(
        const SetTypeDefaultVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new SetTypeDefaultVersionResponsePrivate(this), parent)
{
    setRequest(new SetTypeDefaultVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetTypeDefaultVersionRequest * SetTypeDefaultVersionResponse::request() const
{
    Q_D(const SetTypeDefaultVersionResponse);
    return static_cast<const SetTypeDefaultVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudFormation SetTypeDefaultVersion \a response.
 */
void SetTypeDefaultVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetTypeDefaultVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudFormation::SetTypeDefaultVersionResponsePrivate
 * \brief The SetTypeDefaultVersionResponsePrivate class provides private implementation for SetTypeDefaultVersionResponse.
 * \internal
 *
 * \inmodule QtAwsCloudFormation
 */

/*!
 * Constructs a SetTypeDefaultVersionResponsePrivate object with public implementation \a q.
 */
SetTypeDefaultVersionResponsePrivate::SetTypeDefaultVersionResponsePrivate(
    SetTypeDefaultVersionResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/*!
 * Parses a CloudFormation SetTypeDefaultVersion response element from \a xml.
 */
void SetTypeDefaultVersionResponsePrivate::parseSetTypeDefaultVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetTypeDefaultVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudFormation
} // namespace QtAws
