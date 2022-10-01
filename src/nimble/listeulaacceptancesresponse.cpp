// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listeulaacceptancesresponse.h"
#include "listeulaacceptancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListEulaAcceptancesResponse
 * \brief The ListEulaAcceptancesResponse class provides an interace for Nimble ListEulaAcceptances responses.
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
 * \sa NimbleClient::listEulaAcceptances
 */

/*!
 * Constructs a ListEulaAcceptancesResponse object for \a reply to \a request, with parent \a parent.
 */
ListEulaAcceptancesResponse::ListEulaAcceptancesResponse(
        const ListEulaAcceptancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleResponse(new ListEulaAcceptancesResponsePrivate(this), parent)
{
    setRequest(new ListEulaAcceptancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEulaAcceptancesRequest * ListEulaAcceptancesResponse::request() const
{
    Q_D(const ListEulaAcceptancesResponse);
    return static_cast<const ListEulaAcceptancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Nimble ListEulaAcceptances \a response.
 */
void ListEulaAcceptancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEulaAcceptancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Nimble::ListEulaAcceptancesResponsePrivate
 * \brief The ListEulaAcceptancesResponsePrivate class provides private implementation for ListEulaAcceptancesResponse.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListEulaAcceptancesResponsePrivate object with public implementation \a q.
 */
ListEulaAcceptancesResponsePrivate::ListEulaAcceptancesResponsePrivate(
    ListEulaAcceptancesResponse * const q) : NimbleResponsePrivate(q)
{

}

/*!
 * Parses a Nimble ListEulaAcceptances response element from \a xml.
 */
void ListEulaAcceptancesResponsePrivate::parseListEulaAcceptancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEulaAcceptancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Nimble
} // namespace QtAws
