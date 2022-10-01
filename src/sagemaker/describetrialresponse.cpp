// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetrialresponse.h"
#include "describetrialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrialResponse
 * \brief The DescribeTrialResponse class provides an interace for SageMaker DescribeTrial responses.
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
 * \sa SageMakerClient::describeTrial
 */

/*!
 * Constructs a DescribeTrialResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrialResponse::DescribeTrialResponse(
        const DescribeTrialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTrialResponsePrivate(this), parent)
{
    setRequest(new DescribeTrialRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrialRequest * DescribeTrialResponse::request() const
{
    Q_D(const DescribeTrialResponse);
    return static_cast<const DescribeTrialRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeTrial \a response.
 */
void DescribeTrialResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeTrialResponsePrivate
 * \brief The DescribeTrialResponsePrivate class provides private implementation for DescribeTrialResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrialResponsePrivate object with public implementation \a q.
 */
DescribeTrialResponsePrivate::DescribeTrialResponsePrivate(
    DescribeTrialResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeTrial response element from \a xml.
 */
void DescribeTrialResponsePrivate::parseDescribeTrialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrialResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
