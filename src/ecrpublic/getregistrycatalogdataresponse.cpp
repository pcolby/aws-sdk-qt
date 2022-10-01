// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistrycatalogdataresponse.h"
#include "getregistrycatalogdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetRegistryCatalogDataResponse
 * \brief The GetRegistryCatalogDataResponse class provides an interace for EcrPublic GetRegistryCatalogData responses.
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
 * \sa EcrPublicClient::getRegistryCatalogData
 */

/*!
 * Constructs a GetRegistryCatalogDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegistryCatalogDataResponse::GetRegistryCatalogDataResponse(
        const GetRegistryCatalogDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new GetRegistryCatalogDataResponsePrivate(this), parent)
{
    setRequest(new GetRegistryCatalogDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegistryCatalogDataRequest * GetRegistryCatalogDataResponse::request() const
{
    Q_D(const GetRegistryCatalogDataResponse);
    return static_cast<const GetRegistryCatalogDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic GetRegistryCatalogData \a response.
 */
void GetRegistryCatalogDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRegistryCatalogDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::GetRegistryCatalogDataResponsePrivate
 * \brief The GetRegistryCatalogDataResponsePrivate class provides private implementation for GetRegistryCatalogDataResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetRegistryCatalogDataResponsePrivate object with public implementation \a q.
 */
GetRegistryCatalogDataResponsePrivate::GetRegistryCatalogDataResponsePrivate(
    GetRegistryCatalogDataResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic GetRegistryCatalogData response element from \a xml.
 */
void GetRegistryCatalogDataResponsePrivate::parseGetRegistryCatalogDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistryCatalogDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
