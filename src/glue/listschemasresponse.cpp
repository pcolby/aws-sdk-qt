// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemasresponse.h"
#include "listschemasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSchemasResponse
 * \brief The ListSchemasResponse class provides an interace for Glue ListSchemas responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listSchemas
 */

/*!
 * Constructs a ListSchemasResponse object for \a reply to \a request, with parent \a parent.
 */
ListSchemasResponse::ListSchemasResponse(
        const ListSchemasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListSchemasResponsePrivate(this), parent)
{
    setRequest(new ListSchemasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSchemasRequest * ListSchemasResponse::request() const
{
    Q_D(const ListSchemasResponse);
    return static_cast<const ListSchemasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListSchemas \a response.
 */
void ListSchemasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSchemasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListSchemasResponsePrivate
 * \brief The ListSchemasResponsePrivate class provides private implementation for ListSchemasResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSchemasResponsePrivate object with public implementation \a q.
 */
ListSchemasResponsePrivate::ListSchemasResponsePrivate(
    ListSchemasResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListSchemas response element from \a xml.
 */
void ListSchemasResponsePrivate::parseListSchemasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSchemasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
