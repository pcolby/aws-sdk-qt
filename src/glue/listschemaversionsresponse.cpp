// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemaversionsresponse.h"
#include "listschemaversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSchemaVersionsResponse
 * \brief The ListSchemaVersionsResponse class provides an interace for Glue ListSchemaVersions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listSchemaVersions
 */

/*!
 * Constructs a ListSchemaVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchemaVersionsResponse::ListSchemaVersionsResponse(
        const ListSchemaVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListSchemaVersionsResponsePrivate(this), parent)
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
 * Parses a successful Glue ListSchemaVersions \a response.
 */
void ListSchemaVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchemaVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListSchemaVersionsResponsePrivate
 * \brief The ListSchemaVersionsResponsePrivate class provides private implementation for ListSchemaVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSchemaVersionsResponsePrivate object with public implementation \a q.
 */
ListSchemaVersionsResponsePrivate::ListSchemaVersionsResponsePrivate(
    ListSchemaVersionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListSchemaVersions response element from \a xml.
 */
void ListSchemaVersionsResponsePrivate::parseListSchemaVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemaVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
