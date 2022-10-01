// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listregistriesresponse.h"
#include "listregistriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::ListRegistriesResponse
 * \brief The ListRegistriesResponse class provides an interace for Schemas ListRegistries responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::listRegistries
 */

/*!
 * Constructs a ListRegistriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRegistriesResponse::ListRegistriesResponse(
        const ListRegistriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new ListRegistriesResponsePrivate(this), parent)
{
    setRequest(new ListRegistriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRegistriesRequest * ListRegistriesResponse::request() const
{
    Q_D(const ListRegistriesResponse);
    return static_cast<const ListRegistriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas ListRegistries \a response.
 */
void ListRegistriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRegistriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::ListRegistriesResponsePrivate
 * \brief The ListRegistriesResponsePrivate class provides private implementation for ListRegistriesResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a ListRegistriesResponsePrivate object with public implementation \a q.
 */
ListRegistriesResponsePrivate::ListRegistriesResponsePrivate(
    ListRegistriesResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas ListRegistries response element from \a xml.
 */
void ListRegistriesResponsePrivate::parseListRegistriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRegistriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
