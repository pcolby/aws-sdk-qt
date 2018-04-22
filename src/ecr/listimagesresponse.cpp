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

#include "listimagesresponse.h"
#include "listimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::ListImagesResponse
 * \brief The ListImagesResponse class provides an interace for ECR ListImages responses.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::listImages
 */

/*!
 * Constructs a ListImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListImagesResponse::ListImagesResponse(
        const ListImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new ListImagesResponsePrivate(this), parent)
{
    setRequest(new ListImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListImagesRequest * ListImagesResponse::request() const
{
    Q_D(const ListImagesResponse);
    return static_cast<const ListImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ECR ListImages \a response.
 */
void ListImagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::ListImagesResponsePrivate
 * \brief The ListImagesResponsePrivate class provides private implementation for ListImagesResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a ListImagesResponsePrivate object with public implementation \a q.
 */
ListImagesResponsePrivate::ListImagesResponsePrivate(
    ListImagesResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR ListImages response element from \a xml.
 */
void ListImagesResponsePrivate::parseListImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagesResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
