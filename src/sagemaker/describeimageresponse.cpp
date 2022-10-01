// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimageresponse.h"
#include "describeimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeImageResponse
 * \brief The DescribeImageResponse class provides an interace for SageMaker DescribeImage responses.
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
 * \sa SageMakerClient::describeImage
 */

/*!
 * Constructs a DescribeImageResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageResponse::DescribeImageResponse(
        const DescribeImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeImageResponsePrivate(this), parent)
{
    setRequest(new DescribeImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageRequest * DescribeImageResponse::request() const
{
    Q_D(const DescribeImageResponse);
    return static_cast<const DescribeImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeImage \a response.
 */
void DescribeImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeImageResponsePrivate
 * \brief The DescribeImageResponsePrivate class provides private implementation for DescribeImageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeImageResponsePrivate object with public implementation \a q.
 */
DescribeImageResponsePrivate::DescribeImageResponsePrivate(
    DescribeImageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeImage response element from \a xml.
 */
void DescribeImageResponsePrivate::parseDescribeImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
