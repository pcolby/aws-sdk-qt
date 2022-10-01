// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategatewayresponse.h"
#include "updategatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayResponse
 * \brief The UpdateGatewayResponse class provides an interace for AlexaForBusiness UpdateGateway responses.
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
 * \sa AlexaForBusinessClient::updateGateway
 */

/*!
 * Constructs a UpdateGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGatewayResponse::UpdateGatewayResponse(
        const UpdateGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new UpdateGatewayResponsePrivate(this), parent)
{
    setRequest(new UpdateGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGatewayRequest * UpdateGatewayResponse::request() const
{
    Q_D(const UpdateGatewayResponse);
    return static_cast<const UpdateGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness UpdateGateway \a response.
 */
void UpdateGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateGatewayResponsePrivate
 * \brief The UpdateGatewayResponsePrivate class provides private implementation for UpdateGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateGatewayResponsePrivate object with public implementation \a q.
 */
UpdateGatewayResponsePrivate::UpdateGatewayResponsePrivate(
    UpdateGatewayResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness UpdateGateway response element from \a xml.
 */
void UpdateGatewayResponsePrivate::parseUpdateGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
