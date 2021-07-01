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

#include "removeschemaversionmetadataresponse.h"
#include "removeschemaversionmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RemoveSchemaVersionMetadataResponse
 * \brief The RemoveSchemaVersionMetadataResponse class provides an interace for Glue RemoveSchemaVersionMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::removeSchemaVersionMetadata
 */

/*!
 * Constructs a RemoveSchemaVersionMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveSchemaVersionMetadataResponse::RemoveSchemaVersionMetadataResponse(
        const RemoveSchemaVersionMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new RemoveSchemaVersionMetadataResponsePrivate(this), parent)
{
    setRequest(new RemoveSchemaVersionMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveSchemaVersionMetadataRequest * RemoveSchemaVersionMetadataResponse::request() const
{
    Q_D(const RemoveSchemaVersionMetadataResponse);
    return static_cast<const RemoveSchemaVersionMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue RemoveSchemaVersionMetadata \a response.
 */
void RemoveSchemaVersionMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveSchemaVersionMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::RemoveSchemaVersionMetadataResponsePrivate
 * \brief The RemoveSchemaVersionMetadataResponsePrivate class provides private implementation for RemoveSchemaVersionMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RemoveSchemaVersionMetadataResponsePrivate object with public implementation \a q.
 */
RemoveSchemaVersionMetadataResponsePrivate::RemoveSchemaVersionMetadataResponsePrivate(
    RemoveSchemaVersionMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue RemoveSchemaVersionMetadata response element from \a xml.
 */
void RemoveSchemaVersionMetadataResponsePrivate::parseRemoveSchemaVersionMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveSchemaVersionMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
