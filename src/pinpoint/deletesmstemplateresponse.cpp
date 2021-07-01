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

#include "deletesmstemplateresponse.h"
#include "deletesmstemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateResponse
 * \brief The DeleteSmsTemplateResponse class provides an interace for Pinpoint DeleteSmsTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSmsTemplate
 */

/*!
 * Constructs a DeleteSmsTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSmsTemplateResponse::DeleteSmsTemplateResponse(
        const DeleteSmsTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSmsTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteSmsTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSmsTemplateRequest * DeleteSmsTemplateResponse::request() const
{
    Q_D(const DeleteSmsTemplateResponse);
    return static_cast<const DeleteSmsTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteSmsTemplate \a response.
 */
void DeleteSmsTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSmsTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsTemplateResponsePrivate
 * \brief The DeleteSmsTemplateResponsePrivate class provides private implementation for DeleteSmsTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSmsTemplateResponsePrivate object with public implementation \a q.
 */
DeleteSmsTemplateResponsePrivate::DeleteSmsTemplateResponsePrivate(
    DeleteSmsTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteSmsTemplate response element from \a xml.
 */
void DeleteSmsTemplateResponsePrivate::parseDeleteSmsTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSmsTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
