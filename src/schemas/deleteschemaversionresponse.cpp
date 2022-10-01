// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschemaversionresponse.h"
#include "deleteschemaversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteSchemaVersionResponse
 * \brief The DeleteSchemaVersionResponse class provides an interace for Schemas DeleteSchemaVersion responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteSchemaVersion
 */

/*!
 * Constructs a DeleteSchemaVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSchemaVersionResponse::DeleteSchemaVersionResponse(
        const DeleteSchemaVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DeleteSchemaVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSchemaVersionRequest * DeleteSchemaVersionResponse::request() const
{
    Q_D(const DeleteSchemaVersionResponse);
    return static_cast<const DeleteSchemaVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DeleteSchemaVersion \a response.
 */
void DeleteSchemaVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSchemaVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DeleteSchemaVersionResponsePrivate
 * \brief The DeleteSchemaVersionResponsePrivate class provides private implementation for DeleteSchemaVersionResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteSchemaVersionResponsePrivate object with public implementation \a q.
 */
DeleteSchemaVersionResponsePrivate::DeleteSchemaVersionResponsePrivate(
    DeleteSchemaVersionResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DeleteSchemaVersion response element from \a xml.
 */
void DeleteSchemaVersionResponsePrivate::parseDeleteSchemaVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
