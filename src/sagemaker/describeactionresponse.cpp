// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeactionresponse.h"
#include "describeactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeActionResponse
 * \brief The DescribeActionResponse class provides an interace for SageMaker DescribeAction responses.
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
 * \sa SageMakerClient::describeAction
 */

/*!
 * Constructs a DescribeActionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeActionResponse::DescribeActionResponse(
        const DescribeActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeActionResponsePrivate(this), parent)
{
    setRequest(new DescribeActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeActionRequest * DescribeActionResponse::request() const
{
    Q_D(const DescribeActionResponse);
    return static_cast<const DescribeActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeAction \a response.
 */
void DescribeActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeActionResponsePrivate
 * \brief The DescribeActionResponsePrivate class provides private implementation for DescribeActionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeActionResponsePrivate object with public implementation \a q.
 */
DescribeActionResponsePrivate::DescribeActionResponsePrivate(
    DescribeActionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeAction response element from \a xml.
 */
void DescribeActionResponsePrivate::parseDescribeActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
