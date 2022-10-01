// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createalgorithmresponse.h"
#include "createalgorithmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateAlgorithmResponse
 * \brief The CreateAlgorithmResponse class provides an interace for SageMaker CreateAlgorithm responses.
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
 * \sa SageMakerClient::createAlgorithm
 */

/*!
 * Constructs a CreateAlgorithmResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAlgorithmResponse::CreateAlgorithmResponse(
        const CreateAlgorithmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateAlgorithmResponsePrivate(this), parent)
{
    setRequest(new CreateAlgorithmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAlgorithmRequest * CreateAlgorithmResponse::request() const
{
    Q_D(const CreateAlgorithmResponse);
    return static_cast<const CreateAlgorithmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateAlgorithm \a response.
 */
void CreateAlgorithmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAlgorithmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateAlgorithmResponsePrivate
 * \brief The CreateAlgorithmResponsePrivate class provides private implementation for CreateAlgorithmResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateAlgorithmResponsePrivate object with public implementation \a q.
 */
CreateAlgorithmResponsePrivate::CreateAlgorithmResponsePrivate(
    CreateAlgorithmResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateAlgorithm response element from \a xml.
 */
void CreateAlgorithmResponsePrivate::parseCreateAlgorithmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAlgorithmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
