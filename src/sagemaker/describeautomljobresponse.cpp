// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeautomljobresponse.h"
#include "describeautomljobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAutoMLJobResponse
 * \brief The DescribeAutoMLJobResponse class provides an interace for SageMaker DescribeAutoMLJob responses.
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
 * \sa SageMakerClient::describeAutoMLJob
 */

/*!
 * Constructs a DescribeAutoMLJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAutoMLJobResponse::DescribeAutoMLJobResponse(
        const DescribeAutoMLJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeAutoMLJobResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoMLJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAutoMLJobRequest * DescribeAutoMLJobResponse::request() const
{
    Q_D(const DescribeAutoMLJobResponse);
    return static_cast<const DescribeAutoMLJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeAutoMLJob \a response.
 */
void DescribeAutoMLJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAutoMLJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeAutoMLJobResponsePrivate
 * \brief The DescribeAutoMLJobResponsePrivate class provides private implementation for DescribeAutoMLJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAutoMLJobResponsePrivate object with public implementation \a q.
 */
DescribeAutoMLJobResponsePrivate::DescribeAutoMLJobResponsePrivate(
    DescribeAutoMLJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeAutoMLJob response element from \a xml.
 */
void DescribeAutoMLJobResponsePrivate::parseDescribeAutoMLJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoMLJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
