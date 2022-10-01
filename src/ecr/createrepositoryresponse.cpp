// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrepositoryresponse.h"
#include "createrepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::CreateRepositoryResponse
 * \brief The CreateRepositoryResponse class provides an interace for Ecr CreateRepository responses.
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
 * \sa EcrClient::createRepository
 */

/*!
 * Constructs a CreateRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRepositoryResponse::CreateRepositoryResponse(
        const CreateRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new CreateRepositoryResponsePrivate(this), parent)
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
 * Parses a successful Ecr CreateRepository \a response.
 */
void CreateRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::CreateRepositoryResponsePrivate
 * \brief The CreateRepositoryResponsePrivate class provides private implementation for CreateRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a CreateRepositoryResponsePrivate object with public implementation \a q.
 */
CreateRepositoryResponsePrivate::CreateRepositoryResponsePrivate(
    CreateRepositoryResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr CreateRepository response element from \a xml.
 */
void CreateRepositoryResponsePrivate::parseCreateRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
