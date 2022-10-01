// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdescribemodelpackageresponse.h"
#include "batchdescribemodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::BatchDescribeModelPackageResponse
 * \brief The BatchDescribeModelPackageResponse class provides an interace for SageMaker BatchDescribeModelPackage responses.
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
 * \sa SageMakerClient::batchDescribeModelPackage
 */

/*!
 * Constructs a BatchDescribeModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDescribeModelPackageResponse::BatchDescribeModelPackageResponse(
        const BatchDescribeModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new BatchDescribeModelPackageResponsePrivate(this), parent)
{
    setRequest(new BatchDescribeModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDescribeModelPackageRequest * BatchDescribeModelPackageResponse::request() const
{
    Q_D(const BatchDescribeModelPackageResponse);
    return static_cast<const BatchDescribeModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker BatchDescribeModelPackage \a response.
 */
void BatchDescribeModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDescribeModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::BatchDescribeModelPackageResponsePrivate
 * \brief The BatchDescribeModelPackageResponsePrivate class provides private implementation for BatchDescribeModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a BatchDescribeModelPackageResponsePrivate object with public implementation \a q.
 */
BatchDescribeModelPackageResponsePrivate::BatchDescribeModelPackageResponsePrivate(
    BatchDescribeModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker BatchDescribeModelPackage response element from \a xml.
 */
void BatchDescribeModelPackageResponsePrivate::parseBatchDescribeModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDescribeModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
