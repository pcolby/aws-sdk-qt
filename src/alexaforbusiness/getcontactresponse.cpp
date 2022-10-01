// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontactresponse.h"
#include "getcontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetContactResponse
 * \brief The GetContactResponse class provides an interace for AlexaForBusiness GetContact responses.
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
 * \sa AlexaForBusinessClient::getContact
 */

/*!
 * Constructs a GetContactResponse object for \a reply to \a request, with parent \a parent.
 */
GetContactResponse::GetContactResponse(
        const GetContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetContactResponsePrivate(this), parent)
{
    setRequest(new GetContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetContactRequest * GetContactResponse::request() const
{
    Q_D(const GetContactResponse);
    return static_cast<const GetContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetContact \a response.
 */
void GetContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetContactResponsePrivate
 * \brief The GetContactResponsePrivate class provides private implementation for GetContactResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetContactResponsePrivate object with public implementation \a q.
 */
GetContactResponsePrivate::GetContactResponsePrivate(
    GetContactResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetContact response element from \a xml.
 */
void GetContactResponsePrivate::parseGetContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
