// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepipelineresponse.h"
#include "updatepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdatePipelineResponse
 * \brief The UpdatePipelineResponse class provides an interace for SageMaker UpdatePipeline responses.
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
 * \sa SageMakerClient::updatePipeline
 */

/*!
 * Constructs a UpdatePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePipelineResponse::UpdatePipelineResponse(
        const UpdatePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdatePipelineResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePipelineRequest * UpdatePipelineResponse::request() const
{
    Q_D(const UpdatePipelineResponse);
    return static_cast<const UpdatePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdatePipeline \a response.
 */
void UpdatePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdatePipelineResponsePrivate
 * \brief The UpdatePipelineResponsePrivate class provides private implementation for UpdatePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdatePipelineResponsePrivate object with public implementation \a q.
 */
UpdatePipelineResponsePrivate::UpdatePipelineResponsePrivate(
    UpdatePipelineResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdatePipeline response element from \a xml.
 */
void UpdatePipelineResponsePrivate::parseUpdatePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
