// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
