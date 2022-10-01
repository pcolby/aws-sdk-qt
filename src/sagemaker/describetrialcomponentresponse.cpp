// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetrialcomponentresponse.h"
#include "describetrialcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeTrialComponentResponse
 * \brief The DescribeTrialComponentResponse class provides an interace for SageMaker DescribeTrialComponent responses.
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
 * \sa SageMakerClient::describeTrialComponent
 */

/*!
 * Constructs a DescribeTrialComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTrialComponentResponse::DescribeTrialComponentResponse(
        const DescribeTrialComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeTrialComponentResponsePrivate(this), parent)
{
    setRequest(new DescribeTrialComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTrialComponentRequest * DescribeTrialComponentResponse::request() const
{
    Q_D(const DescribeTrialComponentResponse);
    return static_cast<const DescribeTrialComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeTrialComponent \a response.
 */
void DescribeTrialComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTrialComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeTrialComponentResponsePrivate
 * \brief The DescribeTrialComponentResponsePrivate class provides private implementation for DescribeTrialComponentResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeTrialComponentResponsePrivate object with public implementation \a q.
 */
DescribeTrialComponentResponsePrivate::DescribeTrialComponentResponsePrivate(
    DescribeTrialComponentResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeTrialComponent response element from \a xml.
 */
void DescribeTrialComponentResponsePrivate::parseDescribeTrialComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrialComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
