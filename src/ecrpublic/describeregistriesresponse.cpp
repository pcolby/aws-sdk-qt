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

#include "describeregistriesresponse.h"
#include "describeregistriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DescribeRegistriesResponse
 * \brief The DescribeRegistriesResponse class provides an interace for EcrPublic DescribeRegistries responses.
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
 * \sa EcrPublicClient::describeRegistries
 */

/*!
 * Constructs a DescribeRegistriesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRegistriesResponse::DescribeRegistriesResponse(
        const DescribeRegistriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new DescribeRegistriesResponsePrivate(this), parent)
{
    setRequest(new DescribeRegistriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRegistriesRequest * DescribeRegistriesResponse::request() const
{
    Q_D(const DescribeRegistriesResponse);
    return static_cast<const DescribeRegistriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic DescribeRegistries \a response.
 */
void DescribeRegistriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRegistriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::DescribeRegistriesResponsePrivate
 * \brief The DescribeRegistriesResponsePrivate class provides private implementation for DescribeRegistriesResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DescribeRegistriesResponsePrivate object with public implementation \a q.
 */
DescribeRegistriesResponsePrivate::DescribeRegistriesResponsePrivate(
    DescribeRegistriesResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic DescribeRegistries response element from \a xml.
 */
void DescribeRegistriesResponsePrivate::parseDescribeRegistriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRegistriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
