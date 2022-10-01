// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putreplicationconfigurationresponse.h"
#include "putreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutReplicationConfigurationResponse
 * \brief The PutReplicationConfigurationResponse class provides an interace for Ecr PutReplicationConfiguration responses.
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
 * \sa EcrClient::putReplicationConfiguration
 */

/*!
 * Constructs a PutReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutReplicationConfigurationResponse::PutReplicationConfigurationResponse(
        const PutReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new PutReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutReplicationConfigurationRequest * PutReplicationConfigurationResponse::request() const
{
    Q_D(const PutReplicationConfigurationResponse);
    return static_cast<const PutReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr PutReplicationConfiguration \a response.
 */
void PutReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::PutReplicationConfigurationResponsePrivate
 * \brief The PutReplicationConfigurationResponsePrivate class provides private implementation for PutReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
PutReplicationConfigurationResponsePrivate::PutReplicationConfigurationResponsePrivate(
    PutReplicationConfigurationResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr PutReplicationConfiguration response element from \a xml.
 */
void PutReplicationConfigurationResponsePrivate::parsePutReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
