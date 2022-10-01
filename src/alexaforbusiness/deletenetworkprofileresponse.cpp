// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworkprofileresponse.h"
#include "deletenetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteNetworkProfileResponse
 * \brief The DeleteNetworkProfileResponse class provides an interace for AlexaForBusiness DeleteNetworkProfile responses.
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
 * \sa AlexaForBusinessClient::deleteNetworkProfile
 */

/*!
 * Constructs a DeleteNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNetworkProfileResponse::DeleteNetworkProfileResponse(
        const DeleteNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNetworkProfileRequest * DeleteNetworkProfileResponse::request() const
{
    Q_D(const DeleteNetworkProfileResponse);
    return static_cast<const DeleteNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteNetworkProfile \a response.
 */
void DeleteNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteNetworkProfileResponsePrivate
 * \brief The DeleteNetworkProfileResponsePrivate class provides private implementation for DeleteNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteNetworkProfileResponsePrivate object with public implementation \a q.
 */
DeleteNetworkProfileResponsePrivate::DeleteNetworkProfileResponsePrivate(
    DeleteNetworkProfileResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteNetworkProfile response element from \a xml.
 */
void DeleteNetworkProfileResponsePrivate::parseDeleteNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
