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

#include "deleteinapptemplateresponse.h"
#include "deleteinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateResponse
 * \brief The DeleteInAppTemplateResponse class provides an interace for Pinpoint DeleteInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteInAppTemplate
 */

/*!
 * Constructs a DeleteInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInAppTemplateResponse::DeleteInAppTemplateResponse(
        const DeleteInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInAppTemplateRequest * DeleteInAppTemplateResponse::request() const
{
    Q_D(const DeleteInAppTemplateResponse);
    return static_cast<const DeleteInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteInAppTemplate \a response.
 */
void DeleteInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteInAppTemplateResponsePrivate
 * \brief The DeleteInAppTemplateResponsePrivate class provides private implementation for DeleteInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteInAppTemplateResponsePrivate object with public implementation \a q.
 */
DeleteInAppTemplateResponsePrivate::DeleteInAppTemplateResponsePrivate(
    DeleteInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteInAppTemplate response element from \a xml.
 */
void DeleteInAppTemplateResponsePrivate::parseDeleteInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
