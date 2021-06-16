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

#include "createpushtemplateresponse.h"
#include "createpushtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreatePushTemplateResponse
 * \brief The CreatePushTemplateResponse class provides an interace for Pinpoint CreatePushTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createPushTemplate
 */

/*!
 * Constructs a CreatePushTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePushTemplateResponse::CreatePushTemplateResponse(
        const CreatePushTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreatePushTemplateResponsePrivate(this), parent)
{
    setRequest(new CreatePushTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePushTemplateRequest * CreatePushTemplateResponse::request() const
{
    Q_D(const CreatePushTemplateResponse);
    return static_cast<const CreatePushTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreatePushTemplate \a response.
 */
void CreatePushTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePushTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreatePushTemplateResponsePrivate
 * \brief The CreatePushTemplateResponsePrivate class provides private implementation for CreatePushTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreatePushTemplateResponsePrivate object with public implementation \a q.
 */
CreatePushTemplateResponsePrivate::CreatePushTemplateResponsePrivate(
    CreatePushTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreatePushTemplate response element from \a xml.
 */
void CreatePushTemplateResponsePrivate::parseCreatePushTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePushTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
