// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelqualityjobdefinitionresponse.h"
#include "describemodelqualityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelQualityJobDefinitionResponse
 * \brief The DescribeModelQualityJobDefinitionResponse class provides an interace for SageMaker DescribeModelQualityJobDefinition responses.
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
 * \sa SageMakerClient::describeModelQualityJobDefinition
 */

/*!
 * Constructs a DescribeModelQualityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelQualityJobDefinitionResponse::DescribeModelQualityJobDefinitionResponse(
        const DescribeModelQualityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelQualityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeModelQualityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelQualityJobDefinitionRequest * DescribeModelQualityJobDefinitionResponse::request() const
{
    Q_D(const DescribeModelQualityJobDefinitionResponse);
    return static_cast<const DescribeModelQualityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeModelQualityJobDefinition \a response.
 */
void DescribeModelQualityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelQualityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeModelQualityJobDefinitionResponsePrivate
 * \brief The DescribeModelQualityJobDefinitionResponsePrivate class provides private implementation for DescribeModelQualityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelQualityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DescribeModelQualityJobDefinitionResponsePrivate::DescribeModelQualityJobDefinitionResponsePrivate(
    DescribeModelQualityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeModelQualityJobDefinition response element from \a xml.
 */
void DescribeModelQualityJobDefinitionResponsePrivate::parseDescribeModelQualityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelQualityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
