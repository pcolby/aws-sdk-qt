/*
    Copyright 2013-2019 Paul Colby

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

#include "putconferencepreferenceresponse.h"
#include "putconferencepreferenceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutConferencePreferenceResponse
 * \brief The PutConferencePreferenceResponse class provides an interace for AlexaForBusiness PutConferencePreference responses.
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
 * \sa AlexaForBusinessClient::putConferencePreference
 */

/*!
 * Constructs a PutConferencePreferenceResponse object for \a reply to \a request, with parent \a parent.
 */
PutConferencePreferenceResponse::PutConferencePreferenceResponse(
        const PutConferencePreferenceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new PutConferencePreferenceResponsePrivate(this), parent)
{
    setRequest(new PutConferencePreferenceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutConferencePreferenceRequest * PutConferencePreferenceResponse::request() const
{
    Q_D(const PutConferencePreferenceResponse);
    return static_cast<const PutConferencePreferenceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness PutConferencePreference \a response.
 */
void PutConferencePreferenceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutConferencePreferenceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::PutConferencePreferenceResponsePrivate
 * \brief The PutConferencePreferenceResponsePrivate class provides private implementation for PutConferencePreferenceResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutConferencePreferenceResponsePrivate object with public implementation \a q.
 */
PutConferencePreferenceResponsePrivate::PutConferencePreferenceResponsePrivate(
    PutConferencePreferenceResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness PutConferencePreference response element from \a xml.
 */
void PutConferencePreferenceResponsePrivate::parsePutConferencePreferenceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConferencePreferenceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
