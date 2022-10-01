// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeartifactresponse.h"
#include "describeartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeArtifactResponse
 * \brief The DescribeArtifactResponse class provides an interace for SageMaker DescribeArtifact responses.
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
 * \sa SageMakerClient::describeArtifact
 */

/*!
 * Constructs a DescribeArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeArtifactResponse::DescribeArtifactResponse(
        const DescribeArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeArtifactResponsePrivate(this), parent)
{
    setRequest(new DescribeArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeArtifactRequest * DescribeArtifactResponse::request() const
{
    Q_D(const DescribeArtifactResponse);
    return static_cast<const DescribeArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeArtifact \a response.
 */
void DescribeArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeArtifactResponsePrivate
 * \brief The DescribeArtifactResponsePrivate class provides private implementation for DescribeArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeArtifactResponsePrivate object with public implementation \a q.
 */
DescribeArtifactResponsePrivate::DescribeArtifactResponsePrivate(
    DescribeArtifactResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeArtifact response element from \a xml.
 */
void DescribeArtifactResponsePrivate::parseDescribeArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
