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

#include "getpushtemplateresponse.h"
#include "getpushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetPushTemplateResponse
 * \brief The GetPushTemplateResponse class provides an interace for Pinpoint GetPushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getPushTemplate
 */

/*!
 * Constructs a GetPushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetPushTemplateResponse::GetPushTemplateResponse(
        const GetPushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetPushTemplateResponsePrivate(this), parent)
{
    setRequest(new GetPushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPushTemplateRequest * GetPushTemplateResponse::request() const
{
    return static_cast<const GetPushTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetPushTemplate \a response.
 */
void GetPushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetPushTemplateResponsePrivate
 * \brief The GetPushTemplateResponsePrivate class provides private implementation for GetPushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetPushTemplateResponsePrivate object with public implementation \a q.
 */
GetPushTemplateResponsePrivate::GetPushTemplateResponsePrivate(
    GetPushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetPushTemplate response element from \a xml.
 */
void GetPushTemplateResponsePrivate::parseGetPushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
