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

#include "updateinapptemplateresponse.h"
#include "updateinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateResponse
 * \brief The UpdateInAppTemplateResponse class provides an interace for Pinpoint UpdateInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateInAppTemplate
 */

/*!
 * Constructs a UpdateInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateInAppTemplateResponse::UpdateInAppTemplateResponse(
        const UpdateInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateInAppTemplateRequest * UpdateInAppTemplateResponse::request() const
{
    Q_D(const UpdateInAppTemplateResponse);
    return static_cast<const UpdateInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateInAppTemplate \a response.
 */
void UpdateInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateInAppTemplateResponsePrivate
 * \brief The UpdateInAppTemplateResponsePrivate class provides private implementation for UpdateInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateInAppTemplateResponsePrivate object with public implementation \a q.
 */
UpdateInAppTemplateResponsePrivate::UpdateInAppTemplateResponsePrivate(
    UpdateInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateInAppTemplate response element from \a xml.
 */
void UpdateInAppTemplateResponsePrivate::parseUpdateInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
