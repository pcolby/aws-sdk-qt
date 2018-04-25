/*
    Copyright 2013-2018 Paul Colby

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

#include "createprofileresponse.h"
#include "createprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateProfileResponse
 * \brief The CreateProfileResponse class provides an interace for AlexaForBusiness CreateProfile responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::createProfile
 */

/*!
 * Constructs a CreateProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProfileResponse::CreateProfileResponse(
        const CreateProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateProfileResponsePrivate(this), parent)
{
    setRequest(new CreateProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProfileRequest * CreateProfileResponse::request() const
{
    Q_D(const CreateProfileResponse);
    return static_cast<const CreateProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateProfile \a response.
 */
void CreateProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateProfileResponsePrivate
 * \brief The CreateProfileResponsePrivate class provides private implementation for CreateProfileResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateProfileResponsePrivate object with public implementation \a q.
 */
CreateProfileResponsePrivate::CreateProfileResponsePrivate(
    CreateProfileResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateProfile response element from \a xml.
 */
void CreateProfileResponsePrivate::parseCreateProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProfileResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
