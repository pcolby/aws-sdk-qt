// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendpipelineexecutionstepsuccessresponse.h"
#include "sendpipelineexecutionstepsuccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SendPipelineExecutionStepSuccessResponse
 * \brief The SendPipelineExecutionStepSuccessResponse class provides an interace for SageMaker SendPipelineExecutionStepSuccess responses.
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
 * \sa SageMakerClient::sendPipelineExecutionStepSuccess
 */

/*!
 * Constructs a SendPipelineExecutionStepSuccessResponse object for \a reply to \a request, with parent \a parent.
 */
SendPipelineExecutionStepSuccessResponse::SendPipelineExecutionStepSuccessResponse(
        const SendPipelineExecutionStepSuccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new SendPipelineExecutionStepSuccessResponsePrivate(this), parent)
{
    setRequest(new SendPipelineExecutionStepSuccessRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendPipelineExecutionStepSuccessRequest * SendPipelineExecutionStepSuccessResponse::request() const
{
    Q_D(const SendPipelineExecutionStepSuccessResponse);
    return static_cast<const SendPipelineExecutionStepSuccessRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker SendPipelineExecutionStepSuccess \a response.
 */
void SendPipelineExecutionStepSuccessResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendPipelineExecutionStepSuccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::SendPipelineExecutionStepSuccessResponsePrivate
 * \brief The SendPipelineExecutionStepSuccessResponsePrivate class provides private implementation for SendPipelineExecutionStepSuccessResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SendPipelineExecutionStepSuccessResponsePrivate object with public implementation \a q.
 */
SendPipelineExecutionStepSuccessResponsePrivate::SendPipelineExecutionStepSuccessResponsePrivate(
    SendPipelineExecutionStepSuccessResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker SendPipelineExecutionStepSuccess response element from \a xml.
 */
void SendPipelineExecutionStepSuccessResponsePrivate::parseSendPipelineExecutionStepSuccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendPipelineExecutionStepSuccessResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
