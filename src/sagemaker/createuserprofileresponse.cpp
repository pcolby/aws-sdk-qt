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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
