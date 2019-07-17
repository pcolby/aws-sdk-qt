/*
    Copyright 2013-2019 Paul Colby

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

#include "createdatabaseresponse.h"
#include "createdatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateDatabaseResponse
 * \brief The CreateDatabaseResponse class provides an interace for Glue CreateDatabase responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createDatabase
 */

/*!
 * Constructs a CreateDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDatabaseResponse::CreateDatabaseResponse(
        const CreateDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateDatabaseResponsePrivate(this), parent)
{
    setRequest(new CreateDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDatabaseRequest * CreateDatabaseResponse::request() const
{
    Q_D(const CreateDatabaseResponse);
    return static_cast<const CreateDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateDatabase \a response.
 */
void CreateDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateDatabaseResponsePrivate
 * \brief The CreateDatabaseResponsePrivate class provides private implementation for CreateDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateDatabaseResponsePrivate object with public implementation \a q.
 */
CreateDatabaseResponsePrivate::CreateDatabaseResponsePrivate(
    CreateDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateDatabase response element from \a xml.
 */
void CreateDatabaseResponsePrivate::parseCreateDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
