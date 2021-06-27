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

#include "getsmstemplateresponse.h"
#include "getsmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateResponse
 * \brief The GetSmsTemplateResponse class provides an interace for Pinpoint GetSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSmsTemplate
 */

/*!
 * Constructs a GetSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetSmsTemplateResponse::GetSmsTemplateResponse(
        const GetSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new GetSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSmsTemplateRequest * GetSmsTemplateResponse::request() const
{
    return static_cast<const GetSmsTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSmsTemplate \a response.
 */
void GetSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSmsTemplateResponsePrivate
 * \brief The GetSmsTemplateResponsePrivate class provides private implementation for GetSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSmsTemplateResponsePrivate object with public implementation \a q.
 */
GetSmsTemplateResponsePrivate::GetSmsTemplateResponsePrivate(
    GetSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSmsTemplate response element from \a xml.
 */
void GetSmsTemplateResponsePrivate::parseGetSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
