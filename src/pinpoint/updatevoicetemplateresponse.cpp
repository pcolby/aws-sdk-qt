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

#include "updatevoicetemplateresponse.h"
#include "updatevoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateResponse
 * \brief The UpdateVoiceTemplateResponse class provides an interace for Pinpoint UpdateVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateVoiceTemplate
 */

/*!
 * Constructs a UpdateVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVoiceTemplateResponse::UpdateVoiceTemplateResponse(
        const UpdateVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVoiceTemplateRequest * UpdateVoiceTemplateResponse::request() const
{
    Q_D(const UpdateVoiceTemplateResponse);
    return static_cast<const UpdateVoiceTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateVoiceTemplate \a response.
 */
void UpdateVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateVoiceTemplateResponsePrivate
 * \brief The UpdateVoiceTemplateResponsePrivate class provides private implementation for UpdateVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateVoiceTemplateResponsePrivate object with public implementation \a q.
 */
UpdateVoiceTemplateResponsePrivate::UpdateVoiceTemplateResponsePrivate(
    UpdateVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateVoiceTemplate response element from \a xml.
 */
void UpdateVoiceTemplateResponsePrivate::parseUpdateVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
