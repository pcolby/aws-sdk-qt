// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelexplainabilityjobdefinitionresponse.h"
#include "describemodelexplainabilityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelExplainabilityJobDefinitionResponse
 * \brief The DescribeModelExplainabilityJobDefinitionResponse class provides an interace for SageMaker DescribeModelExplainabilityJobDefinition responses.
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
 * \sa SageMakerClient::describeModelExplainabilityJobDefinition
 */

/*!
 * Constructs a DescribeModelExplainabilityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelExplainabilityJobDefinitionResponse::DescribeModelExplainabilityJobDefinitionResponse(
        const DescribeModelExplainabilityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelExplainabilityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeModelExplainabilityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelExplainabilityJobDefinitionRequest * DescribeModelExplainabilityJobDefinitionResponse::request() const
{
    Q_D(const DescribeModelExplainabilityJobDefinitionResponse);
    return static_cast<const DescribeModelExplainabilityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeModelExplainabilityJobDefinition \a response.
 */
void DescribeModelExplainabilityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelExplainabilityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeModelExplainabilityJobDefinitionResponsePrivate
 * \brief The DescribeModelExplainabilityJobDefinitionResponsePrivate class provides private implementation for DescribeModelExplainabilityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelExplainabilityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DescribeModelExplainabilityJobDefinitionResponsePrivate::DescribeModelExplainabilityJobDefinitionResponsePrivate(
    DescribeModelExplainabilityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeModelExplainabilityJobDefinition response element from \a xml.
 */
void DescribeModelExplainabilityJobDefinitionResponsePrivate::parseDescribeModelExplainabilityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelExplainabilityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
