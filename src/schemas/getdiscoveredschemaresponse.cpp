// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdiscoveredschemaresponse.h"
#include "getdiscoveredschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaResponse
 * \brief The GetDiscoveredSchemaResponse class provides an interace for Schemas GetDiscoveredSchema responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::getDiscoveredSchema
 */

/*!
 * Constructs a GetDiscoveredSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
GetDiscoveredSchemaResponse::GetDiscoveredSchemaResponse(
        const GetDiscoveredSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new GetDiscoveredSchemaResponsePrivate(this), parent)
{
    setRequest(new GetDiscoveredSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDiscoveredSchemaRequest * GetDiscoveredSchemaResponse::request() const
{
    Q_D(const GetDiscoveredSchemaResponse);
    return static_cast<const GetDiscoveredSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas GetDiscoveredSchema \a response.
 */
void GetDiscoveredSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDiscoveredSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::GetDiscoveredSchemaResponsePrivate
 * \brief The GetDiscoveredSchemaResponsePrivate class provides private implementation for GetDiscoveredSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a GetDiscoveredSchemaResponsePrivate object with public implementation \a q.
 */
GetDiscoveredSchemaResponsePrivate::GetDiscoveredSchemaResponsePrivate(
    GetDiscoveredSchemaResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas GetDiscoveredSchema response element from \a xml.
 */
void GetDiscoveredSchemaResponsePrivate::parseGetDiscoveredSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDiscoveredSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
