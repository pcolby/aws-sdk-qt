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

#include "describemodelbiasjobdefinitionresponse.h"
#include "describemodelbiasjobdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelBiasJobDefinitionResponse
 * \brief The DescribeModelBiasJobDefinitionResponse class provides an interace for SageMaker DescribeModelBiasJobDefinition responses.
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
 * \sa SageMakerClient::describeModelBiasJobDefinition
 */

/*!
 * Constructs a DescribeModelBiasJobDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelBiasJobDefinitionResponse::DescribeModelBiasJobDefinitionResponse(
        const DescribeModelBiasJobDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelBiasJobDefinitionResponsePrivate(this), parent)
{
    setRequest(new DescribeModelBiasJobDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelBiasJobDefinitionRequest * DescribeModelBiasJobDefinitionResponse::request() const
{
    Q_D(const DescribeModelBiasJobDefinitionResponse);
    return static_cast<const DescribeModelBiasJobDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeModelBiasJobDefinition \a response.
 */
void DescribeModelBiasJobDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelBiasJobDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeModelBiasJobDefinitionResponsePrivate
 * \brief The DescribeModelBiasJobDefinitionResponsePrivate class provides private implementation for DescribeModelBiasJobDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelBiasJobDefinitionResponsePrivate object with public implementation \a q.
 */
DescribeModelBiasJobDefinitionResponsePrivate::DescribeModelBiasJobDefinitionResponsePrivate(
    DescribeModelBiasJobDefinitionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeModelBiasJobDefinition response element from \a xml.
 */
void DescribeModelBiasJobDefinitionResponsePrivate::parseDescribeModelBiasJobDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelBiasJobDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
