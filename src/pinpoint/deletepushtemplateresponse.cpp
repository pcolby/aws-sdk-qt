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

#include "deletepushtemplateresponse.h"
#include "deletepushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeletePushTemplateResponse
 * \brief The DeletePushTemplateResponse class provides an interace for Pinpoint DeletePushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deletePushTemplate
 */

/*!
 * Constructs a DeletePushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePushTemplateResponse::DeletePushTemplateResponse(
        const DeletePushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeletePushTemplateResponsePrivate(this), parent)
{
    setRequest(new DeletePushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePushTemplateRequest * DeletePushTemplateResponse::request() const
{
    return static_cast<const DeletePushTemplateRequest *>(PinpointResponse::request());
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeletePushTemplate \a response.
 */
void DeletePushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeletePushTemplateResponsePrivate
 * \brief The DeletePushTemplateResponsePrivate class provides private implementation for DeletePushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeletePushTemplateResponsePrivate object with public implementation \a q.
 */
DeletePushTemplateResponsePrivate::DeletePushTemplateResponsePrivate(
    DeletePushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeletePushTemplate response element from \a xml.
 */
void DeletePushTemplateResponsePrivate::parseDeletePushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
