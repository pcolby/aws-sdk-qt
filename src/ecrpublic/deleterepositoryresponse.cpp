// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterepositoryresponse.h"
#include "deleterepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DeleteRepositoryResponse
 * \brief The DeleteRepositoryResponse class provides an interace for EcrPublic DeleteRepository responses.
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
 * \sa EcrPublicClient::deleteRepository
 */

/*!
 * Constructs a DeleteRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRepositoryResponse::DeleteRepositoryResponse(
        const DeleteRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new DeleteRepositoryResponsePrivate(this), parent)
{
    setRequest(new DeleteRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRepositoryRequest * DeleteRepositoryResponse::request() const
{
    Q_D(const DeleteRepositoryResponse);
    return static_cast<const DeleteRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic DeleteRepository \a response.
 */
void DeleteRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::DeleteRepositoryResponsePrivate
 * \brief The DeleteRepositoryResponsePrivate class provides private implementation for DeleteRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DeleteRepositoryResponsePrivate object with public implementation \a q.
 */
DeleteRepositoryResponsePrivate::DeleteRepositoryResponsePrivate(
    DeleteRepositoryResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic DeleteRepository response element from \a xml.
 */
void DeleteRepositoryResponsePrivate::parseDeleteRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
