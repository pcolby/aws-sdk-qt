// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
