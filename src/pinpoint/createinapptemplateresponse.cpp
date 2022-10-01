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

#include "createinapptemplateresponse.h"
#include "createinapptemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateResponse
 * \brief The CreateInAppTemplateResponse class provides an interace for Pinpoint CreateInAppTemplate responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createInAppTemplate
 */

/*!
 * Constructs a CreateInAppTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateInAppTemplateResponse::CreateInAppTemplateResponse(
        const CreateInAppTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateInAppTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateInAppTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateInAppTemplateRequest * CreateInAppTemplateResponse::request() const
{
    Q_D(const CreateInAppTemplateResponse);
    return static_cast<const CreateInAppTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateInAppTemplate \a response.
 */
void CreateInAppTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateInAppTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateInAppTemplateResponsePrivate
 * \brief The CreateInAppTemplateResponsePrivate class provides private implementation for CreateInAppTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateInAppTemplateResponsePrivate object with public implementation \a q.
 */
CreateInAppTemplateResponsePrivate::CreateInAppTemplateResponsePrivate(
    CreateInAppTemplateResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateInAppTemplate response element from \a xml.
 */
void CreateInAppTemplateResponsePrivate::parseCreateInAppTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateInAppTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
