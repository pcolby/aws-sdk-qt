/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
