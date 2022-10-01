// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createuserprofileresponse.h"
#include "createuserprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateUserProfileResponse
 * \brief The CreateUserProfileResponse class provides an interace for SageMaker CreateUserProfile responses.
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
 * \sa SageMakerClient::createUserProfile
 */

/*!
 * Constructs a CreateUserProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserProfileResponse::CreateUserProfileResponse(
        const CreateUserProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateUserProfileResponsePrivate(this), parent)
{
    setRequest(new CreateUserProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserProfileRequest * CreateUserProfileResponse::request() const
{
    Q_D(const CreateUserProfileResponse);
    return static_cast<const CreateUserProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateUserProfile \a response.
 */
void CreateUserProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateUserProfileResponsePrivate
 * \brief The CreateUserProfileResponsePrivate class provides private implementation for CreateUserProfileResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateUserProfileResponsePrivate object with public implementation \a q.
 */
CreateUserProfileResponsePrivate::CreateUserProfileResponsePrivate(
    CreateUserProfileResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateUserProfile response element from \a xml.
 */
void CreateUserProfileResponsePrivate::parseCreateUserProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
