// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
