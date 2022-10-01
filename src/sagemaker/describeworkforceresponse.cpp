// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkforceresponse.h"
#include "describeworkforceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeWorkforceResponse
 * \brief The DescribeWorkforceResponse class provides an interace for SageMaker DescribeWorkforce responses.
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
 * \sa SageMakerClient::describeWorkforce
 */

/*!
 * Constructs a DescribeWorkforceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkforceResponse::DescribeWorkforceResponse(
        const DescribeWorkforceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeWorkforceResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkforceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkforceRequest * DescribeWorkforceResponse::request() const
{
    Q_D(const DescribeWorkforceResponse);
    return static_cast<const DescribeWorkforceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeWorkforce \a response.
 */
void DescribeWorkforceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkforceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeWorkforceResponsePrivate
 * \brief The DescribeWorkforceResponsePrivate class provides private implementation for DescribeWorkforceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeWorkforceResponsePrivate object with public implementation \a q.
 */
DescribeWorkforceResponsePrivate::DescribeWorkforceResponsePrivate(
    DescribeWorkforceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeWorkforce response element from \a xml.
 */
void DescribeWorkforceResponsePrivate::parseDescribeWorkforceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkforceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
