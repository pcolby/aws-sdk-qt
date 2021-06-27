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

#include "updateschemaresponse.h"
#include "updateschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateSchemaResponse
 * \brief The UpdateSchemaResponse class provides an interace for Glue UpdateSchema responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateSchema
 */

/*!
 * Constructs a UpdateSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSchemaResponse::UpdateSchemaResponse(
        const UpdateSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateSchemaResponsePrivate(this), parent)
{
    setRequest(new UpdateSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSchemaRequest * UpdateSchemaResponse::request() const
{
    return static_cast<const UpdateSchemaRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue UpdateSchema \a response.
 */
void UpdateSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateSchemaResponsePrivate
 * \brief The UpdateSchemaResponsePrivate class provides private implementation for UpdateSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateSchemaResponsePrivate object with public implementation \a q.
 */
UpdateSchemaResponsePrivate::UpdateSchemaResponsePrivate(
    UpdateSchemaResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateSchema response element from \a xml.
 */
void UpdateSchemaResponsePrivate::parseUpdateSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
