// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createstudiolifecycleconfigresponse.h"
#include "createstudiolifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateStudioLifecycleConfigResponse
 * \brief The CreateStudioLifecycleConfigResponse class provides an interace for SageMaker CreateStudioLifecycleConfig responses.
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
 * \sa SageMakerClient::createStudioLifecycleConfig
 */

/*!
 * Constructs a CreateStudioLifecycleConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStudioLifecycleConfigResponse::CreateStudioLifecycleConfigResponse(
        const CreateStudioLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateStudioLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new CreateStudioLifecycleConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStudioLifecycleConfigRequest * CreateStudioLifecycleConfigResponse::request() const
{
    Q_D(const CreateStudioLifecycleConfigResponse);
    return static_cast<const CreateStudioLifecycleConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateStudioLifecycleConfig \a response.
 */
void CreateStudioLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStudioLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateStudioLifecycleConfigResponsePrivate
 * \brief The CreateStudioLifecycleConfigResponsePrivate class provides private implementation for CreateStudioLifecycleConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateStudioLifecycleConfigResponsePrivate object with public implementation \a q.
 */
CreateStudioLifecycleConfigResponsePrivate::CreateStudioLifecycleConfigResponsePrivate(
    CreateStudioLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateStudioLifecycleConfig response element from \a xml.
 */
void CreateStudioLifecycleConfigResponsePrivate::parseCreateStudioLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStudioLifecycleConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
