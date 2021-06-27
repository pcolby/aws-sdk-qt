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

#include "createvoicetemplateresponse.h"
#include "createvoicetemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateResponse
 * \brief The CreateVoiceTemplateResponse class provides an interace for Pinpoint CreateVoiceTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createVoiceTemplate
 */

/*!
 * Constructs a CreateVoiceTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateVoiceTemplateResponse::CreateVoiceTemplateResponse(
        const CreateVoiceTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateVoiceTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateVoiceTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateVoiceTemplateRequest * CreateVoiceTemplateResponse::request() const
{
    return static_cast<const CreateVoiceTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateVoiceTemplate \a response.
 */
void CreateVoiceTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateVoiceTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateVoiceTemplateResponsePrivate
 * \brief The CreateVoiceTemplateResponsePrivate class provides private implementation for CreateVoiceTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateVoiceTemplateResponsePrivate object with public implementation \a q.
 */
CreateVoiceTemplateResponsePrivate::CreateVoiceTemplateResponsePrivate(
    CreateVoiceTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateVoiceTemplate response element from \a xml.
 */
void CreateVoiceTemplateResponsePrivate::parseCreateVoiceTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateVoiceTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
