// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeulasresponse.h"
#include "listeulasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListEulasResponse
 * \brief The ListEulasResponse class provides an interace for Nimble ListEulas responses.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listEulas
 */

/*!
 * Constructs a ListEulasResponse object for \a reply to \a request, with parent \a parent.
 */
ListEulasResponse::ListEulasResponse(
        const ListEulasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListEulasResponsePrivate(this), parent)
{
    setRequest(new ListEulasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEulasRequest * ListEulasResponse::request() const
{
    Q_D(const ListEulasResponse);
    return static_cast<const ListEulasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListEulas \a response.
 */
void ListEulasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEulasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListEulasResponsePrivate
 * \brief The ListEulasResponsePrivate class provides private implementation for ListEulasResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListEulasResponsePrivate object with public implementation \a q.
 */
ListEulasResponsePrivate::ListEulasResponsePrivate(
    ListEulasResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListEulas response element from \a xml.
 */
void ListEulasResponsePrivate::parseListEulasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEulasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
