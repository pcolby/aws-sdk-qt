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

#include "listimagesresponse.h"
#include "listimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::ListImagesResponse
 * \brief The ListImagesResponse class provides an interace for Ecr ListImages responses.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
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
 * Parses a successful Ecr ListImages \a response.
 */
void ListImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::ListImagesResponsePrivate
 * \brief The ListImagesResponsePrivate class provides private implementation for ListImagesResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a ListImagesResponsePrivate object with public implementation \a q.
 */
ListImagesResponsePrivate::ListImagesResponsePrivate(
    ListImagesResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr ListImages response element from \a xml.
 */
void ListImagesResponsePrivate::parseListImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
