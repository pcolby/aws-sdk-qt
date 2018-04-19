/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putlifecyclepolicyresponse.h"
#include "putlifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::PutLifecyclePolicyResponse
 * \brief The PutLifecyclePolicyResponse class provides an interace for ECR PutLifecyclePolicy responses.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::putLifecyclePolicy
 */

/*!
 * Constructs a PutLifecyclePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutLifecyclePolicyResponse::PutLifecyclePolicyResponse(
        const PutLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new PutLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new PutLifecyclePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutLifecyclePolicyRequest * PutLifecyclePolicyResponse::request() const
{
    Q_D(const PutLifecyclePolicyResponse);
    return static_cast<const PutLifecyclePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECR PutLifecyclePolicy \a response.
 */
void PutLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutLifecyclePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::PutLifecyclePolicyResponsePrivate
 * \brief The PutLifecyclePolicyResponsePrivate class provides private implementation for PutLifecyclePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a PutLifecyclePolicyResponsePrivate object with public implementation \a q.
 */
PutLifecyclePolicyResponsePrivate::PutLifecyclePolicyResponsePrivate(
    PutLifecyclePolicyResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * Parses a ECR PutLifecyclePolicy response element from \a xml.
 */
void PutLifecyclePolicyResponsePrivate::parsePutLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLifecyclePolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
