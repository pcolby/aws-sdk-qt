// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrepositorycatalogdataresponse.h"
#include "putrepositorycatalogdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::PutRepositoryCatalogDataResponse
 * \brief The PutRepositoryCatalogDataResponse class provides an interace for EcrPublic PutRepositoryCatalogData responses.
 *
 * \inmodule QtAwsEcrPublic
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
 * \sa EcrPublicClient::putRepositoryCatalogData
 */

/*!
 * Constructs a PutRepositoryCatalogDataResponse object for \a reply to \a request, with parent \a parent.
 */
PutRepositoryCatalogDataResponse::PutRepositoryCatalogDataResponse(
        const PutRepositoryCatalogDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new PutRepositoryCatalogDataResponsePrivate(this), parent)
{
    setRequest(new PutRepositoryCatalogDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRepositoryCatalogDataRequest * PutRepositoryCatalogDataResponse::request() const
{
    Q_D(const PutRepositoryCatalogDataResponse);
    return static_cast<const PutRepositoryCatalogDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic PutRepositoryCatalogData \a response.
 */
void PutRepositoryCatalogDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRepositoryCatalogDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::PutRepositoryCatalogDataResponsePrivate
 * \brief The PutRepositoryCatalogDataResponsePrivate class provides private implementation for PutRepositoryCatalogDataResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a PutRepositoryCatalogDataResponsePrivate object with public implementation \a q.
 */
PutRepositoryCatalogDataResponsePrivate::PutRepositoryCatalogDataResponsePrivate(
    PutRepositoryCatalogDataResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic PutRepositoryCatalogData response element from \a xml.
 */
void PutRepositoryCatalogDataResponsePrivate::parsePutRepositoryCatalogDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRepositoryCatalogDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
