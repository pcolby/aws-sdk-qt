// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatecontactwithaddressbookresponse.h"
#include "associatecontactwithaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AssociateContactWithAddressBookResponse
 * \brief The AssociateContactWithAddressBookResponse class provides an interace for AlexaForBusiness AssociateContactWithAddressBook responses.
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
 * \sa AlexaForBusinessClient::associateContactWithAddressBook
 */

/*!
 * Constructs a AssociateContactWithAddressBookResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateContactWithAddressBookResponse::AssociateContactWithAddressBookResponse(
        const AssociateContactWithAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new AssociateContactWithAddressBookResponsePrivate(this), parent)
{
    setRequest(new AssociateContactWithAddressBookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateContactWithAddressBookRequest * AssociateContactWithAddressBookResponse::request() const
{
    Q_D(const AssociateContactWithAddressBookResponse);
    return static_cast<const AssociateContactWithAddressBookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness AssociateContactWithAddressBook \a response.
 */
void AssociateContactWithAddressBookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateContactWithAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::AssociateContactWithAddressBookResponsePrivate
 * \brief The AssociateContactWithAddressBookResponsePrivate class provides private implementation for AssociateContactWithAddressBookResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AssociateContactWithAddressBookResponsePrivate object with public implementation \a q.
 */
AssociateContactWithAddressBookResponsePrivate::AssociateContactWithAddressBookResponsePrivate(
    AssociateContactWithAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness AssociateContactWithAddressBook response element from \a xml.
 */
void AssociateContactWithAddressBookResponsePrivate::parseAssociateContactWithAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateContactWithAddressBookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
