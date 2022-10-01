// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportschemaresponse.h"
#include "exportschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ExportSchemaResponse
 * \brief The ExportSchemaResponse class provides an interace for Schemas ExportSchema responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::exportSchema
 */

/*!
 * Constructs a ExportSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
ExportSchemaResponse::ExportSchemaResponse(
        const ExportSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ExportSchemaResponsePrivate(this), parent)
{
    setRequest(new ExportSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportSchemaRequest * ExportSchemaResponse::request() const
{
    Q_D(const ExportSchemaResponse);
    return static_cast<const ExportSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas ExportSchema \a response.
 */
void ExportSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ExportSchemaResponsePrivate
 * \brief The ExportSchemaResponsePrivate class provides private implementation for ExportSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ExportSchemaResponsePrivate object with public implementation \a q.
 */
ExportSchemaResponsePrivate::ExportSchemaResponsePrivate(
    ExportSchemaResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ExportSchema response element from \a xml.
 */
void ExportSchemaResponsePrivate::parseExportSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
