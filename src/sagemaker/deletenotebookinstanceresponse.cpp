// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotebookinstanceresponse.h"
#include "deletenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceResponse
 * \brief The DeleteNotebookInstanceResponse class provides an interace for SageMaker DeleteNotebookInstance responses.
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
 * \sa SageMakerClient::deleteNotebookInstance
 */

/*!
 * Constructs a DeleteNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNotebookInstanceResponse::DeleteNotebookInstanceResponse(
        const DeleteNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new DeleteNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNotebookInstanceRequest * DeleteNotebookInstanceResponse::request() const
{
    Q_D(const DeleteNotebookInstanceResponse);
    return static_cast<const DeleteNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteNotebookInstance \a response.
 */
void DeleteNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteNotebookInstanceResponsePrivate
 * \brief The DeleteNotebookInstanceResponsePrivate class provides private implementation for DeleteNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteNotebookInstanceResponsePrivate object with public implementation \a q.
 */
DeleteNotebookInstanceResponsePrivate::DeleteNotebookInstanceResponsePrivate(
    DeleteNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteNotebookInstance response element from \a xml.
 */
void DeleteNotebookInstanceResponsePrivate::parseDeleteNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
