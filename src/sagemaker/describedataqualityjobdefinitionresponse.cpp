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

#include "describedataqualityjobdefinitionresponse.h"
#include "describedataqualityjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeDataQualityJobDefinitionResponse
 * \brief The DescribeDataQualityJobDefinitionResponse class provides an interace for SageMaker DescribeDataQualityJobDefinition responses.
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
 * \sa SageMakerClient::describeDataQualityJobDefinition
 */

/*!
 * Constructs a DescribeDataQualityJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataQualityJobDefinitionResponse::DescribeDataQualityJobDefinitionResponse(
        const DescribeDataQualityJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeDataQualityJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeDataQualityJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataQualityJobDefinitionRequest * DescribeDataQualityJobDefinitionResponse::request() const
{
    Q_D(const DescribeDataQualityJobDefinitionResponse);
    return static_cast<const DescribeDataQualityJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeDataQualityJobDefinition \a response.
 */
void DescribeDataQualityJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataQualityJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeDataQualityJobDefinitionResponsePrivate
 * \brief The DescribeDataQualityJobDefinitionResponsePrivate class provides private implementation for DescribeDataQualityJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeDataQualityJobDefinitionResponsePrivate object with public implementation \a q.
 */
DescribeDataQualityJobDefinitionResponsePrivate::DescribeDataQualityJobDefinitionResponsePrivate(
    DescribeDataQualityJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeDataQualityJobDefinition response element from \a xml.
 */
void DescribeDataQualityJobDefinitionResponsePrivate::parseDescribeDataQualityJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataQualityJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
