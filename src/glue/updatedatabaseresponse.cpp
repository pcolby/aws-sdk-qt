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

#include "updatedatabaseresponse.h"
#include "updatedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateDatabaseResponse
 * \brief The UpdateDatabaseResponse class provides an interace for Glue UpdateDatabase responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateDatabase
 */

/*!
 * Constructs a UpdateDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatabaseResponse::UpdateDatabaseResponse(
        const UpdateDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateDatabaseResponsePrivate(this), parent)
{
    setRequest(new UpdateDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatabaseRequest * UpdateDatabaseResponse::request() const
{
    Q_D(const UpdateDatabaseResponse);
    return static_cast<const UpdateDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateDatabase \a response.
 */
void UpdateDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateDatabaseResponsePrivate
 * \brief The UpdateDatabaseResponsePrivate class provides private implementation for UpdateDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateDatabaseResponsePrivate object with public implementation \a q.
 */
UpdateDatabaseResponsePrivate::UpdateDatabaseResponsePrivate(
    UpdateDatabaseResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateDatabase response element from \a xml.
 */
void UpdateDatabaseResponsePrivate::parseUpdateDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
