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

#include "createsmstemplateresponse.h"
#include "createsmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSmsTemplateResponse
 * \brief The CreateSmsTemplateResponse class provides an interace for Pinpoint CreateSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createSmsTemplate
 */

/*!
 * Constructs a CreateSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSmsTemplateResponse::CreateSmsTemplateResponse(
        const CreateSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSmsTemplateRequest * CreateSmsTemplateResponse::request() const
{
    return static_cast<const CreateSmsTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateSmsTemplate \a response.
 */
void CreateSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateSmsTemplateResponsePrivate
 * \brief The CreateSmsTemplateResponsePrivate class provides private implementation for CreateSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateSmsTemplateResponsePrivate object with public implementation \a q.
 */
CreateSmsTemplateResponsePrivate::CreateSmsTemplateResponsePrivate(
    CreateSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateSmsTemplate response element from \a xml.
 */
void CreateSmsTemplateResponsePrivate::parseCreateSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
