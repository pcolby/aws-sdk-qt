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

#include "listpipelineexecutionstepsresponse.h"
#include "listpipelineexecutionstepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionStepsResponse
 * \brief The ListPipelineExecutionStepsResponse class provides an interace for SageMaker ListPipelineExecutionSteps responses.
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
 * \sa SageMakerClient::listPipelineExecutionSteps
 */

/*!
 * Constructs a ListPipelineExecutionStepsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPipelineExecutionStepsResponse::ListPipelineExecutionStepsResponse(
        const ListPipelineExecutionStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new ListPipelineExecutionStepsResponsePrivate(this), parent)
{
    setRequest(new ListPipelineExecutionStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPipelineExecutionStepsRequest * ListPipelineExecutionStepsResponse::request() const
{
    Q_D(const ListPipelineExecutionStepsResponse);
    return static_cast<const ListPipelineExecutionStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker ListPipelineExecutionSteps \a response.
 */
void ListPipelineExecutionStepsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPipelineExecutionStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::ListPipelineExecutionStepsResponsePrivate
 * \brief The ListPipelineExecutionStepsResponsePrivate class provides private implementation for ListPipelineExecutionStepsResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListPipelineExecutionStepsResponsePrivate object with public implementation \a q.
 */
ListPipelineExecutionStepsResponsePrivate::ListPipelineExecutionStepsResponsePrivate(
    ListPipelineExecutionStepsResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker ListPipelineExecutionSteps response element from \a xml.
 */
void ListPipelineExecutionStepsResponsePrivate::parseListPipelineExecutionStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPipelineExecutionStepsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
