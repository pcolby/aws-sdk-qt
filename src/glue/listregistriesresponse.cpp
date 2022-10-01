// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listregistriesresponse.h"
#include "listregistriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListRegistriesResponse
 * \brief The ListRegistriesResponse class provides an interace for Glue ListRegistries responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listRegistries
 */

/*!
 * Constructs a ListRegistriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListRegistriesResponse::ListRegistriesResponse(
        const ListRegistriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListRegistriesResponsePrivate(this), parent)
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
 * Parses a successful Glue ListRegistries \a response.
 */
void ListRegistriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRegistriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListRegistriesResponsePrivate
 * \brief The ListRegistriesResponsePrivate class provides private implementation for ListRegistriesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListRegistriesResponsePrivate object with public implementation \a q.
 */
ListRegistriesResponsePrivate::ListRegistriesResponsePrivate(
    ListRegistriesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListRegistries response element from \a xml.
 */
void ListRegistriesResponsePrivate::parseListRegistriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRegistriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
