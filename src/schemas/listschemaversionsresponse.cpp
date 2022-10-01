// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemaversionsresponse.h"
#include "listschemaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListSchemaVersionsResponse
 * \brief The ListSchemaVersionsResponse class provides an interace for Schemas ListSchemaVersions responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listSchemaVersions
 */

/*!
 * Constructs a ListSchemaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchemaVersionsResponse::ListSchemaVersionsResponse(
        const ListSchemaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ListSchemaVersionsResponsePrivate(this), parent)
{
    setRequest(new ListSchemaVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchemaVersionsRequest * ListSchemaVersionsResponse::request() const
{
    Q_D(const ListSchemaVersionsResponse);
    return static_cast<const ListSchemaVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas ListSchemaVersions \a response.
 */
void ListSchemaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchemaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ListSchemaVersionsResponsePrivate
 * \brief The ListSchemaVersionsResponsePrivate class provides private implementation for ListSchemaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListSchemaVersionsResponsePrivate object with public implementation \a q.
 */
ListSchemaVersionsResponsePrivate::ListSchemaVersionsResponsePrivate(
    ListSchemaVersionsResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ListSchemaVersions response element from \a xml.
 */
void ListSchemaVersionsResponsePrivate::parseListSchemaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
