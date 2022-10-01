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

#include "getinapptemplateresponse.h"
#include "getinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateResponse
 * \brief The GetInAppTemplateResponse class provides an interace for Pinpoint GetInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getInAppTemplate
 */

/*!
 * Constructs a GetInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetInAppTemplateResponse::GetInAppTemplateResponse(
        const GetInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new GetInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetInAppTemplateRequest * GetInAppTemplateResponse::request() const
{
    Q_D(const GetInAppTemplateResponse);
    return static_cast<const GetInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetInAppTemplate \a response.
 */
void GetInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetInAppTemplateResponsePrivate
 * \brief The GetInAppTemplateResponsePrivate class provides private implementation for GetInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetInAppTemplateResponsePrivate object with public implementation \a q.
 */
GetInAppTemplateResponsePrivate::GetInAppTemplateResponsePrivate(
    GetInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetInAppTemplate response element from \a xml.
 */
void GetInAppTemplateResponsePrivate::parseGetInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
