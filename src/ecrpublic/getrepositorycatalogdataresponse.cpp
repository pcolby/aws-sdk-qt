// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrepositorycatalogdataresponse.h"
#include "getrepositorycatalogdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetRepositoryCatalogDataResponse
 * \brief The GetRepositoryCatalogDataResponse class provides an interace for EcrPublic GetRepositoryCatalogData responses.
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
 * \sa EcrPublicClient::getRepositoryCatalogData
 */

/*!
 * Constructs a GetRepositoryCatalogDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetRepositoryCatalogDataResponse::GetRepositoryCatalogDataResponse(
        const GetRepositoryCatalogDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new GetRepositoryCatalogDataResponsePrivate(this), parent)
{
    setRequest(new GetRepositoryCatalogDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRepositoryCatalogDataRequest * GetRepositoryCatalogDataResponse::request() const
{
    Q_D(const GetRepositoryCatalogDataResponse);
    return static_cast<const GetRepositoryCatalogDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic GetRepositoryCatalogData \a response.
 */
void GetRepositoryCatalogDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRepositoryCatalogDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::GetRepositoryCatalogDataResponsePrivate
 * \brief The GetRepositoryCatalogDataResponsePrivate class provides private implementation for GetRepositoryCatalogDataResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetRepositoryCatalogDataResponsePrivate object with public implementation \a q.
 */
GetRepositoryCatalogDataResponsePrivate::GetRepositoryCatalogDataResponsePrivate(
    GetRepositoryCatalogDataResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic GetRepositoryCatalogData response element from \a xml.
 */
void GetRepositoryCatalogDataResponsePrivate::parseGetRepositoryCatalogDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRepositoryCatalogDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
