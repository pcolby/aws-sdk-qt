// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepipelineexecutionresponse.h"
#include "updatepipelineexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdatePipelineExecutionResponse
 * \brief The UpdatePipelineExecutionResponse class provides an interace for SageMaker UpdatePipelineExecution responses.
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
 * \sa SageMakerClient::updatePipelineExecution
 */

/*!
 * Constructs a UpdatePipelineExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePipelineExecutionResponse::UpdatePipelineExecutionResponse(
        const UpdatePipelineExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdatePipelineExecutionResponsePrivate(this), parent)
{
    setRequest(new UpdatePipelineExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePipelineExecutionRequest * UpdatePipelineExecutionResponse::request() const
{
    Q_D(const UpdatePipelineExecutionResponse);
    return static_cast<const UpdatePipelineExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdatePipelineExecution \a response.
 */
void UpdatePipelineExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePipelineExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdatePipelineExecutionResponsePrivate
 * \brief The UpdatePipelineExecutionResponsePrivate class provides private implementation for UpdatePipelineExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdatePipelineExecutionResponsePrivate object with public implementation \a q.
 */
UpdatePipelineExecutionResponsePrivate::UpdatePipelineExecutionResponsePrivate(
    UpdatePipelineExecutionResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdatePipelineExecution response element from \a xml.
 */
void UpdatePipelineExecutionResponsePrivate::parseUpdatePipelineExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePipelineExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
