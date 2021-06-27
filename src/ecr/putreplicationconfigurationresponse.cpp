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

#include "putreplicationconfigurationresponse.h"
#include "putreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::PutReplicationConfigurationResponse
 * \brief The PutReplicationConfigurationResponse class provides an interace for ECR PutReplicationConfiguration responses.
 *
 * \inmodule QtAwsECR
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
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
    return static_cast<const PutReplicationConfigurationRequest *>(EcrResponse::request());
}

/*!
 * \reimp
 * Parses a successful ECR PutReplicationConfiguration \a response.
 */
void PutReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::PutReplicationConfigurationResponsePrivate
 * \brief The PutReplicationConfigurationResponsePrivate class provides private implementation for PutReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a PutReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
PutReplicationConfigurationResponsePrivate::PutReplicationConfigurationResponsePrivate(
    PutReplicationConfigurationResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR PutReplicationConfiguration response element from \a xml.
 */
void PutReplicationConfigurationResponsePrivate::parsePutReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECR
} // namespace QtAws
