// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterepositoryresponse.h"
#include "deleterepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DeleteRepositoryResponse
 * \brief The DeleteRepositoryResponse class provides an interace for Ecr DeleteRepository responses.
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
 * \sa EcrClient::deleteRepository
 */

/*!
 * Constructs a DeleteRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRepositoryResponse::DeleteRepositoryResponse(
        const DeleteRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DeleteRepositoryResponsePrivate(this), parent)
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
 * Parses a successful Ecr DeleteRepository \a response.
 */
void DeleteRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DeleteRepositoryResponsePrivate
 * \brief The DeleteRepositoryResponsePrivate class provides private implementation for DeleteRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DeleteRepositoryResponsePrivate object with public implementation \a q.
 */
DeleteRepositoryResponsePrivate::DeleteRepositoryResponsePrivate(
    DeleteRepositoryResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DeleteRepository response element from \a xml.
 */
void DeleteRepositoryResponsePrivate::parseDeleteRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
