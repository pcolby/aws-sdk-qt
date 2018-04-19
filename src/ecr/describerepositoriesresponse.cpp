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

#include "describerepositoriesresponse.h"
#include "describerepositoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::DescribeRepositoriesResponse
 * \brief The DescribeRepositoriesResponse class provides an interace for ECR DescribeRepositories responses.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::describeRepositories
 */

/*!
 * Constructs a DescribeRepositoriesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRepositoriesResponse::DescribeRepositoriesResponse(
        const DescribeRepositoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DescribeRepositoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeRepositoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRepositoriesRequest * DescribeRepositoriesResponse::request() const
{
    Q_D(const DescribeRepositoriesResponse);
    return static_cast<const DescribeRepositoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECR DescribeRepositories \a response.
 */
void DescribeRepositoriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRepositoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::DescribeRepositoriesResponsePrivate
 * \brief The DescribeRepositoriesResponsePrivate class provides private implementation for DescribeRepositoriesResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a DescribeRepositoriesResponsePrivate object with public implementation \a q.
 */
DescribeRepositoriesResponsePrivate::DescribeRepositoriesResponsePrivate(
    DescribeRepositoriesResponse * const q) : ECRResponsePrivate(q)
{

}

/*!
 * Parses a ECR DescribeRepositories response element from \a xml.
 */
void DescribeRepositoriesResponsePrivate::parseDescribeRepositoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRepositoriesResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
