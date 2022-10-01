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

#include "createsessionresponse.h"
#include "createsessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateSessionResponse
 * \brief The CreateSessionResponse class provides an interace for Glue CreateSession responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createSession
 */

/*!
 * Constructs a CreateSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSessionResponse::CreateSessionResponse(
        const CreateSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateSessionResponsePrivate(this), parent)
{
    setRequest(new CreateSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSessionRequest * CreateSessionResponse::request() const
{
    Q_D(const CreateSessionResponse);
    return static_cast<const CreateSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateSession \a response.
 */
void CreateSessionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateSessionResponsePrivate
 * \brief The CreateSessionResponsePrivate class provides private implementation for CreateSessionResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateSessionResponsePrivate object with public implementation \a q.
 */
CreateSessionResponsePrivate::CreateSessionResponsePrivate(
    CreateSessionResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateSession response element from \a xml.
 */
void CreateSessionResponsePrivate::parseCreateSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSessionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
