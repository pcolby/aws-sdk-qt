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
