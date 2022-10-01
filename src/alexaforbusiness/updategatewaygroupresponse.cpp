// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewaygroupresponse.h"
#include "updategatewaygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayGroupResponse
 * \brief The UpdateGatewayGroupResponse class provides an interace for AlexaForBusiness UpdateGatewayGroup responses.
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
 * \sa AlexaForBusinessClient::updateGatewayGroup
 */

/*!
 * Constructs a UpdateGatewayGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewayGroupResponse::UpdateGatewayGroupResponse(
        const UpdateGatewayGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateGatewayGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewayGroupRequest * UpdateGatewayGroupResponse::request() const
{
    Q_D(const UpdateGatewayGroupResponse);
    return static_cast<const UpdateGatewayGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateGatewayGroup \a response.
 */
void UpdateGatewayGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewayGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayGroupResponsePrivate
 * \brief The UpdateGatewayGroupResponsePrivate class provides private implementation for UpdateGatewayGroupResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateGatewayGroupResponsePrivate object with public implementation \a q.
 */
UpdateGatewayGroupResponsePrivate::UpdateGatewayGroupResponsePrivate(
    UpdateGatewayGroupResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateGatewayGroup response element from \a xml.
 */
void UpdateGatewayGroupResponsePrivate::parseUpdateGatewayGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
