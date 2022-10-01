// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
