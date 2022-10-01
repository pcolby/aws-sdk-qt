/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
