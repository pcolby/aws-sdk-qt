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

#include "creategatewaygroupresponse.h"
#include "creategatewaygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateGatewayGroupResponse
 * \brief The CreateGatewayGroupResponse class provides an interace for AlexaForBusiness CreateGatewayGroup responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::createGatewayGroup
 */

/*!
 * Constructs a CreateGatewayGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateGatewayGroupResponse::CreateGatewayGroupResponse(
        const CreateGatewayGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateGatewayGroupResponsePrivate(this), parent)
{
    setRequest(new CreateGatewayGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateGatewayGroupRequest * CreateGatewayGroupResponse::request() const
{
    Q_D(const CreateGatewayGroupResponse);
    return static_cast<const CreateGatewayGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateGatewayGroup \a response.
 */
void CreateGatewayGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateGatewayGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateGatewayGroupResponsePrivate
 * \brief The CreateGatewayGroupResponsePrivate class provides private implementation for CreateGatewayGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateGatewayGroupResponsePrivate object with public implementation \a q.
 */
CreateGatewayGroupResponsePrivate::CreateGatewayGroupResponsePrivate(
    CreateGatewayGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateGatewayGroup response element from \a xml.
 */
void CreateGatewayGroupResponsePrivate::parseCreateGatewayGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGatewayGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
