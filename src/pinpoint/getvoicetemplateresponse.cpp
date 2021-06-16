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

#include "getvoicetemplateresponse.h"
#include "getvoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetVoiceTemplateResponse
 * \brief The GetVoiceTemplateResponse class provides an interace for Pinpoint GetVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getVoiceTemplate
 */

/*!
 * Constructs a GetVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetVoiceTemplateResponse::GetVoiceTemplateResponse(
        const GetVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new GetVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetVoiceTemplateRequest * GetVoiceTemplateResponse::request() const
{
    Q_D(const GetVoiceTemplateResponse);
    return static_cast<const GetVoiceTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetVoiceTemplate \a response.
 */
void GetVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetVoiceTemplateResponsePrivate
 * \brief The GetVoiceTemplateResponsePrivate class provides private implementation for GetVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetVoiceTemplateResponsePrivate object with public implementation \a q.
 */
GetVoiceTemplateResponsePrivate::GetVoiceTemplateResponsePrivate(
    GetVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetVoiceTemplate response element from \a xml.
 */
void GetVoiceTemplateResponsePrivate::parseGetVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
