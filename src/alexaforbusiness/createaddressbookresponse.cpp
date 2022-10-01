// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaddressbookresponse.h"
#include "createaddressbookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateAddressBookResponse
 * \brief The CreateAddressBookResponse class provides an interace for AlexaForBusiness CreateAddressBook responses.
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
 * \sa AlexaForBusinessClient::createAddressBook
 */

/*!
 * Constructs a CreateAddressBookResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAddressBookResponse::CreateAddressBookResponse(
        const CreateAddressBookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new CreateAddressBookResponsePrivate(this), parent)
{
    setRequest(new CreateAddressBookRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAddressBookRequest * CreateAddressBookResponse::request() const
{
    Q_D(const CreateAddressBookResponse);
    return static_cast<const CreateAddressBookRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness CreateAddressBook \a response.
 */
void CreateAddressBookResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAddressBookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::CreateAddressBookResponsePrivate
 * \brief The CreateAddressBookResponsePrivate class provides private implementation for CreateAddressBookResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateAddressBookResponsePrivate object with public implementation \a q.
 */
CreateAddressBookResponsePrivate::CreateAddressBookResponsePrivate(
    CreateAddressBookResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness CreateAddressBook response element from \a xml.
 */
void CreateAddressBookResponsePrivate::parseCreateAddressBookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAddressBookResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
