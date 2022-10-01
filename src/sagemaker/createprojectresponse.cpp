// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprojectresponse.h"
#include "createprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateProjectResponse
 * \brief The CreateProjectResponse class provides an interace for SageMaker CreateProject responses.
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
 * \sa SageMakerClient::createProject
 */

/*!
 * Constructs a CreateProjectResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProjectResponse::CreateProjectResponse(
        const CreateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateProjectResponsePrivate(this), parent)
{
    setRequest(new CreateProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProjectRequest * CreateProjectResponse::request() const
{
    Q_D(const CreateProjectResponse);
    return static_cast<const CreateProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateProject \a response.
 */
void CreateProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateProjectResponsePrivate
 * \brief The CreateProjectResponsePrivate class provides private implementation for CreateProjectResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateProjectResponsePrivate object with public implementation \a q.
 */
CreateProjectResponsePrivate::CreateProjectResponsePrivate(
    CreateProjectResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateProject response element from \a xml.
 */
void CreateProjectResponsePrivate::parseCreateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
