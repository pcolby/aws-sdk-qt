// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
