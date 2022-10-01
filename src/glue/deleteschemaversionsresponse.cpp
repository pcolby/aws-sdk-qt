// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschemaversionsresponse.h"
#include "deleteschemaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSchemaVersionsResponse
 * \brief The DeleteSchemaVersionsResponse class provides an interace for Glue DeleteSchemaVersions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteSchemaVersions
 */

/*!
 * Constructs a DeleteSchemaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSchemaVersionsResponse::DeleteSchemaVersionsResponse(
        const DeleteSchemaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteSchemaVersionsResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSchemaVersionsRequest * DeleteSchemaVersionsResponse::request() const
{
    Q_D(const DeleteSchemaVersionsResponse);
    return static_cast<const DeleteSchemaVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue DeleteSchemaVersions \a response.
 */
void DeleteSchemaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSchemaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteSchemaVersionsResponsePrivate
 * \brief The DeleteSchemaVersionsResponsePrivate class provides private implementation for DeleteSchemaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSchemaVersionsResponsePrivate object with public implementation \a q.
 */
DeleteSchemaVersionsResponsePrivate::DeleteSchemaVersionsResponsePrivate(
    DeleteSchemaVersionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteSchemaVersions response element from \a xml.
 */
void DeleteSchemaVersionsResponsePrivate::parseDeleteSchemaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
