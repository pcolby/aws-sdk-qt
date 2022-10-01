// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startnotebookinstanceresponse.h"
#include "startnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartNotebookInstanceResponse
 * \brief The StartNotebookInstanceResponse class provides an interace for SageMaker StartNotebookInstance responses.
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
 * \sa SageMakerClient::startNotebookInstance
 */

/*!
 * Constructs a StartNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
StartNotebookInstanceResponse::StartNotebookInstanceResponse(
        const StartNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StartNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new StartNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartNotebookInstanceRequest * StartNotebookInstanceResponse::request() const
{
    Q_D(const StartNotebookInstanceResponse);
    return static_cast<const StartNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker StartNotebookInstance \a response.
 */
void StartNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::StartNotebookInstanceResponsePrivate
 * \brief The StartNotebookInstanceResponsePrivate class provides private implementation for StartNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartNotebookInstanceResponsePrivate object with public implementation \a q.
 */
StartNotebookInstanceResponsePrivate::StartNotebookInstanceResponsePrivate(
    StartNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker StartNotebookInstance response element from \a xml.
 */
void StartNotebookInstanceResponsePrivate::parseStartNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
