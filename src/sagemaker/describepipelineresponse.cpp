// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepipelineresponse.h"
#include "describepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribePipelineResponse
 * \brief The DescribePipelineResponse class provides an interace for SageMaker DescribePipeline responses.
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
 * \sa SageMakerClient::describePipeline
 */

/*!
 * Constructs a DescribePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePipelineResponse::DescribePipelineResponse(
        const DescribePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribePipelineResponsePrivate(this), parent)
{
    setRequest(new DescribePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePipelineRequest * DescribePipelineResponse::request() const
{
    Q_D(const DescribePipelineResponse);
    return static_cast<const DescribePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribePipeline \a response.
 */
void DescribePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribePipelineResponsePrivate
 * \brief The DescribePipelineResponsePrivate class provides private implementation for DescribePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribePipelineResponsePrivate object with public implementation \a q.
 */
DescribePipelineResponsePrivate::DescribePipelineResponsePrivate(
    DescribePipelineResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribePipeline response element from \a xml.
 */
void DescribePipelineResponsePrivate::parseDescribePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
