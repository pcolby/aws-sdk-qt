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

#include "updatesmstemplateresponse.h"
#include "updatesmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateResponse
 * \brief The UpdateSmsTemplateResponse class provides an interace for Pinpoint UpdateSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSmsTemplate
 */

/*!
 * Constructs a UpdateSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSmsTemplateResponse::UpdateSmsTemplateResponse(
        const UpdateSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSmsTemplateRequest * UpdateSmsTemplateResponse::request() const
{
    Q_D(const UpdateSmsTemplateResponse);
    return static_cast<const UpdateSmsTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateSmsTemplate \a response.
 */
void UpdateSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsTemplateResponsePrivate
 * \brief The UpdateSmsTemplateResponsePrivate class provides private implementation for UpdateSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsTemplateResponsePrivate object with public implementation \a q.
 */
UpdateSmsTemplateResponsePrivate::UpdateSmsTemplateResponsePrivate(
    UpdateSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateSmsTemplate response element from \a xml.
 */
void UpdateSmsTemplateResponsePrivate::parseUpdateSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
