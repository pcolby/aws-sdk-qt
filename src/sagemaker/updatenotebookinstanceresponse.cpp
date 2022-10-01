// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenotebookinstanceresponse.h"
#include "updatenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceResponse
 * \brief The UpdateNotebookInstanceResponse class provides an interace for SageMaker UpdateNotebookInstance responses.
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
 * \sa SageMakerClient::updateNotebookInstance
 */

/*!
 * Constructs a UpdateNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateNotebookInstanceResponse::UpdateNotebookInstanceResponse(
        const UpdateNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateNotebookInstanceRequest * UpdateNotebookInstanceResponse::request() const
{
    Q_D(const UpdateNotebookInstanceResponse);
    return static_cast<const UpdateNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateNotebookInstance \a response.
 */
void UpdateNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateNotebookInstanceResponsePrivate
 * \brief The UpdateNotebookInstanceResponsePrivate class provides private implementation for UpdateNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateNotebookInstanceResponsePrivate object with public implementation \a q.
 */
UpdateNotebookInstanceResponsePrivate::UpdateNotebookInstanceResponsePrivate(
    UpdateNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateNotebookInstance response element from \a xml.
 */
void UpdateNotebookInstanceResponsePrivate::parseUpdateNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
