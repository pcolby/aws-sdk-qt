// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeflowdefinitionresponse.h"
#include "describeflowdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeFlowDefinitionResponse
 * \brief The DescribeFlowDefinitionResponse class provides an interace for SageMaker DescribeFlowDefinition responses.
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
 * \sa SageMakerClient::describeFlowDefinition
 */

/*!
 * Constructs a DescribeFlowDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFlowDefinitionResponse::DescribeFlowDefinitionResponse(
        const DescribeFlowDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeFlowDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeFlowDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFlowDefinitionRequest * DescribeFlowDefinitionResponse::request() const
{
    Q_D(const DescribeFlowDefinitionResponse);
    return static_cast<const DescribeFlowDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeFlowDefinition \a response.
 */
void DescribeFlowDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFlowDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeFlowDefinitionResponsePrivate
 * \brief The DescribeFlowDefinitionResponsePrivate class provides private implementation for DescribeFlowDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeFlowDefinitionResponsePrivate object with public implementation \a q.
 */
DescribeFlowDefinitionResponsePrivate::DescribeFlowDefinitionResponsePrivate(
    DescribeFlowDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeFlowDefinition response element from \a xml.
 */
void DescribeFlowDefinitionResponsePrivate::parseDescribeFlowDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFlowDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
