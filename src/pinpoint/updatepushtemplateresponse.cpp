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

#include "updatepushtemplateresponse.h"
#include "updatepushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateResponse
 * \brief The UpdatePushTemplateResponse class provides an interace for Pinpoint UpdatePushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updatePushTemplate
 */

/*!
 * Constructs a UpdatePushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePushTemplateResponse::UpdatePushTemplateResponse(
        const UpdatePushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdatePushTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdatePushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePushTemplateRequest * UpdatePushTemplateResponse::request() const
{
    Q_D(const UpdatePushTemplateResponse);
    return static_cast<const UpdatePushTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdatePushTemplate \a response.
 */
void UpdatePushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdatePushTemplateResponsePrivate
 * \brief The UpdatePushTemplateResponsePrivate class provides private implementation for UpdatePushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdatePushTemplateResponsePrivate object with public implementation \a q.
 */
UpdatePushTemplateResponsePrivate::UpdatePushTemplateResponsePrivate(
    UpdatePushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdatePushTemplate response element from \a xml.
 */
void UpdatePushTemplateResponsePrivate::parseUpdatePushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
