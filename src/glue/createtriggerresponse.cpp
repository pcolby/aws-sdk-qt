/*
    Copyright 2013-2018 Paul Colby

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

#include "createtriggerresponse.h"
#include "createtriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateTriggerResponse
 * \brief The CreateTriggerResponse class provides an interace for Glue CreateTrigger responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createTrigger
 */

/*!
 * Constructs a CreateTriggerResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTriggerResponse::CreateTriggerResponse(
        const CreateTriggerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateTriggerResponsePrivate(this), parent)
{
    setRequest(new CreateTriggerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTriggerRequest * CreateTriggerResponse::request() const
{
    Q_D(const CreateTriggerResponse);
    return static_cast<const CreateTriggerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateTrigger \a response.
 */
void CreateTriggerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTriggerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateTriggerResponsePrivate
 * \brief The CreateTriggerResponsePrivate class provides private implementation for CreateTriggerResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateTriggerResponsePrivate object with public implementation \a q.
 */
CreateTriggerResponsePrivate::CreateTriggerResponsePrivate(
    CreateTriggerResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateTrigger response element from \a xml.
 */
void CreateTriggerResponsePrivate::parseCreateTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTriggerResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
