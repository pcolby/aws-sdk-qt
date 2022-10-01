// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelpackageresponse.h"
#include "describemodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelPackageResponse
 * \brief The DescribeModelPackageResponse class provides an interace for SageMaker DescribeModelPackage responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describeModelPackage
 */

/*!
 * Constructs a DescribeModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelPackageResponse::DescribeModelPackageResponse(
        const DescribeModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelPackageResponsePrivate(this), parent)
{
    setRequest(new DescribeModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelPackageRequest * DescribeModelPackageResponse::request() const
{
    Q_D(const DescribeModelPackageResponse);
    return static_cast<const DescribeModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeModelPackage \a response.
 */
void DescribeModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeModelPackageResponsePrivate
 * \brief The DescribeModelPackageResponsePrivate class provides private implementation for DescribeModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelPackageResponsePrivate object with public implementation \a q.
 */
DescribeModelPackageResponsePrivate::DescribeModelPackageResponsePrivate(
    DescribeModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeModelPackage response element from \a xml.
 */
void DescribeModelPackageResponsePrivate::parseDescribeModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
