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

#include "deletevoicetemplateresponse.h"
#include "deletevoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateResponse
 * \brief The DeleteVoiceTemplateResponse class provides an interace for Pinpoint DeleteVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteVoiceTemplate
 */

/*!
 * Constructs a DeleteVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVoiceTemplateResponse::DeleteVoiceTemplateResponse(
        const DeleteVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVoiceTemplateRequest * DeleteVoiceTemplateResponse::request() const
{
    return static_cast<const DeleteVoiceTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteVoiceTemplate \a response.
 */
void DeleteVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceTemplateResponsePrivate
 * \brief The DeleteVoiceTemplateResponsePrivate class provides private implementation for DeleteVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceTemplateResponsePrivate object with public implementation \a q.
 */
DeleteVoiceTemplateResponsePrivate::DeleteVoiceTemplateResponsePrivate(
    DeleteVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteVoiceTemplate response element from \a xml.
 */
void DeleteVoiceTemplateResponsePrivate::parseDeleteVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
