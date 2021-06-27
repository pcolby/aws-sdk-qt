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

#include "putrepositorycatalogdataresponse.h"
#include "putrepositorycatalogdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECRPublic {

/*!
 * \class QtAws::ECRPublic::PutRepositoryCatalogDataResponse
 * \brief The PutRepositoryCatalogDataResponse class provides an interace for ECRPublic PutRepositoryCatalogData responses.
 *
 * \inmodule QtAwsECRPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa ECRPublicClient::putRepositoryCatalogData
 */

/*!
 * Constructs a PutRepositoryCatalogDataResponse object for \a reply to \a request, with parent \a parent.
 */
PutRepositoryCatalogDataResponse::PutRepositoryCatalogDataResponse(
        const PutRepositoryCatalogDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRPublicResponse(new PutRepositoryCatalogDataResponsePrivate(this), parent)
{
    setRequest(new PutRepositoryCatalogDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRepositoryCatalogDataRequest * PutRepositoryCatalogDataResponse::request() const
{
    return static_cast<const PutRepositoryCatalogDataRequest *>(ECRPublicResponse::request());
}

/*!
 * \reimp
 * Parses a successful ECRPublic PutRepositoryCatalogData \a response.
 */
void PutRepositoryCatalogDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRepositoryCatalogDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECRPublic::PutRepositoryCatalogDataResponsePrivate
 * \brief The PutRepositoryCatalogDataResponsePrivate class provides private implementation for PutRepositoryCatalogDataResponse.
 * \internal
 *
 * \inmodule QtAwsECRPublic
 */

/*!
 * Constructs a PutRepositoryCatalogDataResponsePrivate object with public implementation \a q.
 */
PutRepositoryCatalogDataResponsePrivate::PutRepositoryCatalogDataResponsePrivate(
    PutRepositoryCatalogDataResponse * const q) : ECRPublicResponsePrivate(q)
{

}

/*!
 * Parses a ECRPublic PutRepositoryCatalogData response element from \a xml.
 */
void PutRepositoryCatalogDataResponsePrivate::parsePutRepositoryCatalogDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRepositoryCatalogDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECRPublic
} // namespace QtAws
