// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeappresponse.h"
#include "describeappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeAppResponse
 * \brief The DescribeAppResponse class provides an interace for SageMaker DescribeApp responses.
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
 * \sa SageMakerClient::describeApp
 */

/*!
 * Constructs a DescribeAppResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAppResponse::DescribeAppResponse(
        const DescribeAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeAppResponsePrivate(this), parent)
{
    setRequest(new DescribeAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAppRequest * DescribeAppResponse::request() const
{
    Q_D(const DescribeAppResponse);
    return static_cast<const DescribeAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeApp \a response.
 */
void DescribeAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeAppResponsePrivate
 * \brief The DescribeAppResponsePrivate class provides private implementation for DescribeAppResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeAppResponsePrivate object with public implementation \a q.
 */
DescribeAppResponsePrivate::DescribeAppResponsePrivate(
    DescribeAppResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeApp response element from \a xml.
 */
void DescribeAppResponsePrivate::parseDescribeAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
