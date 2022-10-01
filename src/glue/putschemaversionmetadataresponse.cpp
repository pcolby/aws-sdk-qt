// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
