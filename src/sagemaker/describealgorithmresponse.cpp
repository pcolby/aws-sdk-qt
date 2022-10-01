// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealgorithmresponse.h"
#include "describealgorithmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAlgorithmResponse
 * \brief The DescribeAlgorithmResponse class provides an interace for SageMaker DescribeAlgorithm responses.
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
 * \sa SageMakerClient::describeAlgorithm
 */

/*!
 * Constructs a DescribeAlgorithmResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAlgorithmResponse::DescribeAlgorithmResponse(
        const DescribeAlgorithmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeAlgorithmResponsePrivate(this), parent)
{
    setRequest(new DescribeAlgorithmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAlgorithmRequest * DescribeAlgorithmResponse::request() const
{
    Q_D(const DescribeAlgorithmResponse);
    return static_cast<const DescribeAlgorithmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeAlgorithm \a response.
 */
void DescribeAlgorithmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAlgorithmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeAlgorithmResponsePrivate
 * \brief The DescribeAlgorithmResponsePrivate class provides private implementation for DescribeAlgorithmResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAlgorithmResponsePrivate object with public implementation \a q.
 */
DescribeAlgorithmResponsePrivate::DescribeAlgorithmResponsePrivate(
    DescribeAlgorithmResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeAlgorithm response element from \a xml.
 */
void DescribeAlgorithmResponsePrivate::parseDescribeAlgorithmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlgorithmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
