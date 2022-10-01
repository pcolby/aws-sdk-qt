// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
