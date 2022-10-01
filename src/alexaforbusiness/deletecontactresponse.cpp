// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontactresponse.h"
#include "deletecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteContactResponse
 * \brief The DeleteContactResponse class provides an interace for AlexaForBusiness DeleteContact responses.
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
 * \sa AlexaForBusinessClient::deleteContact
 */

/*!
 * Constructs a DeleteContactResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteContactResponse::DeleteContactResponse(
        const DeleteContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteContactResponsePrivate(this), parent)
{
    setRequest(new DeleteContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteContactRequest * DeleteContactResponse::request() const
{
    Q_D(const DeleteContactResponse);
    return static_cast<const DeleteContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteContact \a response.
 */
void DeleteContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteContactResponsePrivate
 * \brief The DeleteContactResponsePrivate class provides private implementation for DeleteContactResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteContactResponsePrivate object with public implementation \a q.
 */
DeleteContactResponsePrivate::DeleteContactResponsePrivate(
    DeleteContactResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteContact response element from \a xml.
 */
void DeleteContactResponsePrivate::parseDeleteContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
