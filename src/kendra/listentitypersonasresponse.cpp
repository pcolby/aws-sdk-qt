// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listentitypersonasresponse.h"
#include "listentitypersonasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListEntityPersonasResponse
 * \brief The ListEntityPersonasResponse class provides an interace for Kendra ListEntityPersonas responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listEntityPersonas
 */

/*!
 * Constructs a ListEntityPersonasResponse object for \a reply to \a request, with parent \a parent.
 */
ListEntityPersonasResponse::ListEntityPersonasResponse(
        const ListEntityPersonasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListEntityPersonasResponsePrivate(this), parent)
{
    setRequest(new ListEntityPersonasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEntityPersonasRequest * ListEntityPersonasResponse::request() const
{
    Q_D(const ListEntityPersonasResponse);
    return static_cast<const ListEntityPersonasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListEntityPersonas \a response.
 */
void ListEntityPersonasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEntityPersonasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListEntityPersonasResponsePrivate
 * \brief The ListEntityPersonasResponsePrivate class provides private implementation for ListEntityPersonasResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListEntityPersonasResponsePrivate object with public implementation \a q.
 */
ListEntityPersonasResponsePrivate::ListEntityPersonasResponsePrivate(
    ListEntityPersonasResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListEntityPersonas response element from \a xml.
 */
void ListEntityPersonasResponsePrivate::parseListEntityPersonasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntityPersonasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
