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

#include "describefeaturemetadataresponse.h"
#include "describefeaturemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeFeatureMetadataResponse
 * \brief The DescribeFeatureMetadataResponse class provides an interace for SageMaker DescribeFeatureMetadata responses.
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
 * \sa SageMakerClient::describeFeatureMetadata
 */

/*!
 * Constructs a DescribeFeatureMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFeatureMetadataResponse::DescribeFeatureMetadataResponse(
        const DescribeFeatureMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeFeatureMetadataResponsePrivate(this), parent)
{
    setRequest(new DescribeFeatureMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFeatureMetadataRequest * DescribeFeatureMetadataResponse::request() const
{
    Q_D(const DescribeFeatureMetadataResponse);
    return static_cast<const DescribeFeatureMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeFeatureMetadata \a response.
 */
void DescribeFeatureMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFeatureMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeFeatureMetadataResponsePrivate
 * \brief The DescribeFeatureMetadataResponsePrivate class provides private implementation for DescribeFeatureMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeFeatureMetadataResponsePrivate object with public implementation \a q.
 */
DescribeFeatureMetadataResponsePrivate::DescribeFeatureMetadataResponsePrivate(
    DescribeFeatureMetadataResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeFeatureMetadata response element from \a xml.
 */
void DescribeFeatureMetadataResponsePrivate::parseDescribeFeatureMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFeatureMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
