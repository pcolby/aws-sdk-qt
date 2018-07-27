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

#include "createtableresponse.h"
#include "createtableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateTableResponse
 * \brief The CreateTableResponse class provides an interace for Glue CreateTable responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createTable
 */

/*!
 * Constructs a CreateTableResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTableResponse::CreateTableResponse(
        const CreateTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateTableResponsePrivate(this), parent)
{
    setRequest(new CreateTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTableRequest * CreateTableResponse::request() const
{
    Q_D(const CreateTableResponse);
    return static_cast<const CreateTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue CreateTable \a response.
 */
void CreateTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::CreateTableResponsePrivate
 * \brief The CreateTableResponsePrivate class provides private implementation for CreateTableResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateTableResponsePrivate object with public implementation \a q.
 */
CreateTableResponsePrivate::CreateTableResponsePrivate(
    CreateTableResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue CreateTable response element from \a xml.
 */
void CreateTableResponsePrivate::parseCreateTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
