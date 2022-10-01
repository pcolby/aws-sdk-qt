// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createartifactresponse.h"
#include "createartifactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateArtifactResponse
 * \brief The CreateArtifactResponse class provides an interace for SageMaker CreateArtifact responses.
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
 * \sa SageMakerClient::createArtifact
 */

/*!
 * Constructs a CreateArtifactResponse object for \a reply to \a request, with parent \a parent.
 */
CreateArtifactResponse::CreateArtifactResponse(
        const CreateArtifactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateArtifactResponsePrivate(this), parent)
{
    setRequest(new CreateArtifactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateArtifactRequest * CreateArtifactResponse::request() const
{
    Q_D(const CreateArtifactResponse);
    return static_cast<const CreateArtifactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateArtifact \a response.
 */
void CreateArtifactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateArtifactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateArtifactResponsePrivate
 * \brief The CreateArtifactResponsePrivate class provides private implementation for CreateArtifactResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateArtifactResponsePrivate object with public implementation \a q.
 */
CreateArtifactResponsePrivate::CreateArtifactResponsePrivate(
    CreateArtifactResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateArtifact response element from \a xml.
 */
void CreateArtifactResponsePrivate::parseCreateArtifactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateArtifactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
