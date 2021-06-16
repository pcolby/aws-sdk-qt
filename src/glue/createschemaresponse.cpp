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

#include "createschemaresponse.h"
#include "createschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateSchemaResponse
 * \brief The CreateSchemaResponse class provides an interace for Glue CreateSchema responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createSchema
 */

/*!
 * Constructs a CreateSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSchemaResponse::CreateSchemaResponse(
        const CreateSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateSchemaResponsePrivate(this), parent)
{
    setRequest(new CreateSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSchemaRequest * CreateSchemaResponse::request() const
{
    Q_D(const CreateSchemaResponse);
    return static_cast<const CreateSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateSchema \a response.
 */
void CreateSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateSchemaResponsePrivate
 * \brief The CreateSchemaResponsePrivate class provides private implementation for CreateSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateSchemaResponsePrivate object with public implementation \a q.
 */
CreateSchemaResponsePrivate::CreateSchemaResponsePrivate(
    CreateSchemaResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateSchema response element from \a xml.
 */
void CreateSchemaResponsePrivate::parseCreateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
