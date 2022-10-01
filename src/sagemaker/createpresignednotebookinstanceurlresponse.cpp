// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpresignednotebookinstanceurlresponse.h"
#include "createpresignednotebookinstanceurlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlResponse
 * \brief The CreatePresignedNotebookInstanceUrlResponse class provides an interace for SageMaker CreatePresignedNotebookInstanceUrl responses.
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
 * \sa SageMakerClient::createPresignedNotebookInstanceUrl
 */

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePresignedNotebookInstanceUrlResponse::CreatePresignedNotebookInstanceUrlResponse(
        const CreatePresignedNotebookInstanceUrlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreatePresignedNotebookInstanceUrlResponsePrivate(this), parent)
{
    setRequest(new CreatePresignedNotebookInstanceUrlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePresignedNotebookInstanceUrlRequest * CreatePresignedNotebookInstanceUrlResponse::request() const
{
    Q_D(const CreatePresignedNotebookInstanceUrlResponse);
    return static_cast<const CreatePresignedNotebookInstanceUrlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreatePresignedNotebookInstanceUrl \a response.
 */
void CreatePresignedNotebookInstanceUrlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePresignedNotebookInstanceUrlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreatePresignedNotebookInstanceUrlResponsePrivate
 * \brief The CreatePresignedNotebookInstanceUrlResponsePrivate class provides private implementation for CreatePresignedNotebookInstanceUrlResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePresignedNotebookInstanceUrlResponsePrivate object with public implementation \a q.
 */
CreatePresignedNotebookInstanceUrlResponsePrivate::CreatePresignedNotebookInstanceUrlResponsePrivate(
    CreatePresignedNotebookInstanceUrlResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreatePresignedNotebookInstanceUrl response element from \a xml.
 */
void CreatePresignedNotebookInstanceUrlResponsePrivate::parseCreatePresignedNotebookInstanceUrlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePresignedNotebookInstanceUrlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
