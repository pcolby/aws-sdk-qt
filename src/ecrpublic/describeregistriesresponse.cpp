// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
