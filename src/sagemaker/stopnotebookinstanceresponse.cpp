// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopnotebookinstanceresponse.h"
#include "stopnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopNotebookInstanceResponse
 * \brief The StopNotebookInstanceResponse class provides an interace for SageMaker StopNotebookInstance responses.
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
 * \sa SageMakerClient::stopNotebookInstance
 */

/*!
 * Constructs a StopNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
StopNotebookInstanceResponse::StopNotebookInstanceResponse(
        const StopNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new StopNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopNotebookInstanceRequest * StopNotebookInstanceResponse::request() const
{
    Q_D(const StopNotebookInstanceResponse);
    return static_cast<const StopNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StopNotebookInstance \a response.
 */
void StopNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StopNotebookInstanceResponsePrivate
 * \brief The StopNotebookInstanceResponsePrivate class provides private implementation for StopNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopNotebookInstanceResponsePrivate object with public implementation \a q.
 */
StopNotebookInstanceResponsePrivate::StopNotebookInstanceResponsePrivate(
    StopNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StopNotebookInstance response element from \a xml.
 */
void StopNotebookInstanceResponsePrivate::parseStopNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
