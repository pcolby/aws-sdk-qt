// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaddressbookresponse.h"
#include "getaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetAddressBookResponse
 * \brief The GetAddressBookResponse class provides an interace for AlexaForBusiness GetAddressBook responses.
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
 * \sa AlexaForBusinessClient::getAddressBook
 */

/*!
 * Constructs a GetAddressBookResponse object for \a reply to \a request, with parent \a parent.
 */
GetAddressBookResponse::GetAddressBookResponse(
        const GetAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetAddressBookResponsePrivate(this), parent)
{
    setRequest(new GetAddressBookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAddressBookRequest * GetAddressBookResponse::request() const
{
    Q_D(const GetAddressBookResponse);
    return static_cast<const GetAddressBookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetAddressBook \a response.
 */
void GetAddressBookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetAddressBookResponsePrivate
 * \brief The GetAddressBookResponsePrivate class provides private implementation for GetAddressBookResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetAddressBookResponsePrivate object with public implementation \a q.
 */
GetAddressBookResponsePrivate::GetAddressBookResponsePrivate(
    GetAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetAddressBook response element from \a xml.
 */
void GetAddressBookResponsePrivate::parseGetAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAddressBookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
