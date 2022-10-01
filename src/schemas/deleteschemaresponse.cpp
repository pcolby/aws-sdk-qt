// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschemaresponse.h"
#include "deleteschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteSchemaResponse
 * \brief The DeleteSchemaResponse class provides an interace for Schemas DeleteSchema responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteSchema
 */

/*!
 * Constructs a DeleteSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSchemaResponse::DeleteSchemaResponse(
        const DeleteSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DeleteSchemaResponsePrivate(this), parent)
{
    setRequest(new DeleteSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSchemaRequest * DeleteSchemaResponse::request() const
{
    Q_D(const DeleteSchemaResponse);
    return static_cast<const DeleteSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DeleteSchema \a response.
 */
void DeleteSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DeleteSchemaResponsePrivate
 * \brief The DeleteSchemaResponsePrivate class provides private implementation for DeleteSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteSchemaResponsePrivate object with public implementation \a q.
 */
DeleteSchemaResponsePrivate::DeleteSchemaResponsePrivate(
    DeleteSchemaResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DeleteSchema response element from \a xml.
 */
void DeleteSchemaResponsePrivate::parseDeleteSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
