// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtransformjobresponse.h"
#include "createtransformjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTransformJobResponse
 * \brief The CreateTransformJobResponse class provides an interace for SageMaker CreateTransformJob responses.
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
 * \sa SageMakerClient::createTransformJob
 */

/*!
 * Constructs a CreateTransformJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTransformJobResponse::CreateTransformJobResponse(
        const CreateTransformJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateTransformJobResponsePrivate(this), parent)
{
    setRequest(new CreateTransformJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTransformJobRequest * CreateTransformJobResponse::request() const
{
    Q_D(const CreateTransformJobResponse);
    return static_cast<const CreateTransformJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateTransformJob \a response.
 */
void CreateTransformJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTransformJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateTransformJobResponsePrivate
 * \brief The CreateTransformJobResponsePrivate class provides private implementation for CreateTransformJobResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTransformJobResponsePrivate object with public implementation \a q.
 */
CreateTransformJobResponsePrivate::CreateTransformJobResponsePrivate(
    CreateTransformJobResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateTransformJob response element from \a xml.
 */
void CreateTransformJobResponsePrivate::parseCreateTransformJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTransformJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
