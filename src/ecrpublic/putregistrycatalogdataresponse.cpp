// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putregistrycatalogdataresponse.h"
#include "putregistrycatalogdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::PutRegistryCatalogDataResponse
 * \brief The PutRegistryCatalogDataResponse class provides an interace for EcrPublic PutRegistryCatalogData responses.
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
 * \sa EcrPublicClient::putRegistryCatalogData
 */

/*!
 * Constructs a PutRegistryCatalogDataResponse object for \a reply to \a request, with parent \a parent.
 */
PutRegistryCatalogDataResponse::PutRegistryCatalogDataResponse(
        const PutRegistryCatalogDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new PutRegistryCatalogDataResponsePrivate(this), parent)
{
    setRequest(new PutRegistryCatalogDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRegistryCatalogDataRequest * PutRegistryCatalogDataResponse::request() const
{
    Q_D(const PutRegistryCatalogDataResponse);
    return static_cast<const PutRegistryCatalogDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic PutRegistryCatalogData \a response.
 */
void PutRegistryCatalogDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRegistryCatalogDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::PutRegistryCatalogDataResponsePrivate
 * \brief The PutRegistryCatalogDataResponsePrivate class provides private implementation for PutRegistryCatalogDataResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a PutRegistryCatalogDataResponsePrivate object with public implementation \a q.
 */
PutRegistryCatalogDataResponsePrivate::PutRegistryCatalogDataResponsePrivate(
    PutRegistryCatalogDataResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic PutRegistryCatalogData response element from \a xml.
 */
void PutRegistryCatalogDataResponsePrivate::parsePutRegistryCatalogDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRegistryCatalogDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
