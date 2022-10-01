// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontextresponse.h"
#include "describecontextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeContextResponse
 * \brief The DescribeContextResponse class provides an interace for SageMaker DescribeContext responses.
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
 * \sa SageMakerClient::describeContext
 */

/*!
 * Constructs a DescribeContextResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContextResponse::DescribeContextResponse(
        const DescribeContextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeContextResponsePrivate(this), parent)
{
    setRequest(new DescribeContextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContextRequest * DescribeContextResponse::request() const
{
    Q_D(const DescribeContextResponse);
    return static_cast<const DescribeContextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeContext \a response.
 */
void DescribeContextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeContextResponsePrivate
 * \brief The DescribeContextResponsePrivate class provides private implementation for DescribeContextResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeContextResponsePrivate object with public implementation \a q.
 */
DescribeContextResponsePrivate::DescribeContextResponsePrivate(
    DescribeContextResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeContext response element from \a xml.
 */
void DescribeContextResponsePrivate::parseDescribeContextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
