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

#include "putschemaversionmetadataresponse.h"
#include "putschemaversionmetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutSchemaVersionMetadataResponse
 * \brief The PutSchemaVersionMetadataResponse class provides an interace for Glue PutSchemaVersionMetadata responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::putSchemaVersionMetadata
 */

/*!
 * Constructs a PutSchemaVersionMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
PutSchemaVersionMetadataResponse::PutSchemaVersionMetadataResponse(
        const PutSchemaVersionMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new PutSchemaVersionMetadataResponsePrivate(this), parent)
{
    setRequest(new PutSchemaVersionMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSchemaVersionMetadataRequest * PutSchemaVersionMetadataResponse::request() const
{
    Q_D(const PutSchemaVersionMetadataResponse);
    return static_cast<const PutSchemaVersionMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue PutSchemaVersionMetadata \a response.
 */
void PutSchemaVersionMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSchemaVersionMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::PutSchemaVersionMetadataResponsePrivate
 * \brief The PutSchemaVersionMetadataResponsePrivate class provides private implementation for PutSchemaVersionMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutSchemaVersionMetadataResponsePrivate object with public implementation \a q.
 */
PutSchemaVersionMetadataResponsePrivate::PutSchemaVersionMetadataResponsePrivate(
    PutSchemaVersionMetadataResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue PutSchemaVersionMetadata response element from \a xml.
 */
void PutSchemaVersionMetadataResponsePrivate::parsePutSchemaVersionMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSchemaVersionMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
