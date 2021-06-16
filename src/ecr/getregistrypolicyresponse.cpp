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

#include "getregistrypolicyresponse.h"
#include "getregistrypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::GetRegistryPolicyResponse
 * \brief The GetRegistryPolicyResponse class provides an interace for ECR GetRegistryPolicy responses.
 *
 * \inmodule QtAwsECR
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 *
 * \sa EcrClient::getRegistryPolicy
 */

/*!
 * Constructs a GetRegistryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegistryPolicyResponse::GetRegistryPolicyResponse(
        const GetRegistryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new GetRegistryPolicyResponsePrivate(this), parent)
{
    setRequest(new GetRegistryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegistryPolicyRequest * GetRegistryPolicyResponse::request() const
{
    Q_D(const GetRegistryPolicyResponse);
    return static_cast<const GetRegistryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECR GetRegistryPolicy \a response.
 */
void GetRegistryPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRegistryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::GetRegistryPolicyResponsePrivate
 * \brief The GetRegistryPolicyResponsePrivate class provides private implementation for GetRegistryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a GetRegistryPolicyResponsePrivate object with public implementation \a q.
 */
GetRegistryPolicyResponsePrivate::GetRegistryPolicyResponsePrivate(
    GetRegistryPolicyResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR GetRegistryPolicy response element from \a xml.
 */
void GetRegistryPolicyResponsePrivate::parseGetRegistryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistryPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECR
} // namespace QtAws
