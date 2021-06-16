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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
