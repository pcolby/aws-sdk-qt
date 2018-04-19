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

#include "deleterepositorypolicyresponse.h"
#include "deleterepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::DeleteRepositoryPolicyResponse
 * \brief The DeleteRepositoryPolicyResponse class provides an interace for ECR DeleteRepositoryPolicy responses.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::deleteRepositoryPolicy
 */

/*!
 * Constructs a DeleteRepositoryPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRepositoryPolicyResponse::DeleteRepositoryPolicyResponse(
        const DeleteRepositoryPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DeleteRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRepositoryPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRepositoryPolicyRequest * DeleteRepositoryPolicyResponse::request() const
{
    Q_D(const DeleteRepositoryPolicyResponse);
    return static_cast<const DeleteRepositoryPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECR DeleteRepositoryPolicy \a response.
 */
void DeleteRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteRepositoryPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::DeleteRepositoryPolicyResponsePrivate
 * \brief The DeleteRepositoryPolicyResponsePrivate class provides private implementation for DeleteRepositoryPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a DeleteRepositoryPolicyResponsePrivate object with public implementation \a q.
 */
DeleteRepositoryPolicyResponsePrivate::DeleteRepositoryPolicyResponsePrivate(
    DeleteRepositoryPolicyResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * Parses a ECR DeleteRepositoryPolicy response element from \a xml.
 */
void DeleteRepositoryPolicyResponsePrivate::parseDeleteRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryPolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
