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

#include "updateemailtemplateresponse.h"
#include "updateemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateResponse
 * \brief The UpdateEmailTemplateResponse class provides an interace for Pinpoint UpdateEmailTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateEmailTemplate
 */

/*!
 * Constructs a UpdateEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEmailTemplateResponse::UpdateEmailTemplateResponse(
        const UpdateEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEmailTemplateRequest * UpdateEmailTemplateResponse::request() const
{
    return static_cast<const UpdateEmailTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateEmailTemplate \a response.
 */
void UpdateEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateEmailTemplateResponsePrivate
 * \brief The UpdateEmailTemplateResponsePrivate class provides private implementation for UpdateEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateEmailTemplateResponsePrivate object with public implementation \a q.
 */
UpdateEmailTemplateResponsePrivate::UpdateEmailTemplateResponsePrivate(
    UpdateEmailTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateEmailTemplate response element from \a xml.
 */
void UpdateEmailTemplateResponsePrivate::parseUpdateEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
