// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createnotebookinstanceresponse.h"
#include "createnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceResponse
 * \brief The CreateNotebookInstanceResponse class provides an interace for SageMaker CreateNotebookInstance responses.
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
 * \sa SageMakerClient::createNotebookInstance
 */

/*!
 * Constructs a CreateNotebookInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateNotebookInstanceResponse::CreateNotebookInstanceResponse(
        const CreateNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateNotebookInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateNotebookInstanceRequest * CreateNotebookInstanceResponse::request() const
{
    Q_D(const CreateNotebookInstanceResponse);
    return static_cast<const CreateNotebookInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateNotebookInstance \a response.
 */
void CreateNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateNotebookInstanceResponsePrivate
 * \brief The CreateNotebookInstanceResponsePrivate class provides private implementation for CreateNotebookInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateNotebookInstanceResponsePrivate object with public implementation \a q.
 */
CreateNotebookInstanceResponsePrivate::CreateNotebookInstanceResponsePrivate(
    CreateNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateNotebookInstance response element from \a xml.
 */
void CreateNotebookInstanceResponsePrivate::parseCreateNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNotebookInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
