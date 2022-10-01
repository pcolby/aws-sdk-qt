// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrepositoryresponse.h"
#include "createrepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::CreateRepositoryResponse
 * \brief The CreateRepositoryResponse class provides an interace for EcrPublic CreateRepository responses.
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
 * \sa EcrPublicClient::createRepository
 */

/*!
 * Constructs a CreateRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRepositoryResponse::CreateRepositoryResponse(
        const CreateRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new CreateRepositoryResponsePrivate(this), parent)
{
    setRequest(new CreateRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRepositoryRequest * CreateRepositoryResponse::request() const
{
    Q_D(const CreateRepositoryResponse);
    return static_cast<const CreateRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic CreateRepository \a response.
 */
void CreateRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::CreateRepositoryResponsePrivate
 * \brief The CreateRepositoryResponsePrivate class provides private implementation for CreateRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a CreateRepositoryResponsePrivate object with public implementation \a q.
 */
CreateRepositoryResponsePrivate::CreateRepositoryResponsePrivate(
    CreateRepositoryResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic CreateRepository response element from \a xml.
 */
void CreateRepositoryResponsePrivate::parseCreateRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
