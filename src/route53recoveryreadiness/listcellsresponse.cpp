// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcellsresponse.h"
#include "listcellsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53RecoveryReadiness {

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCellsResponse
 * \brief The ListCellsResponse class provides an interace for Route53RecoveryReadiness ListCells responses.
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 *
 *  Recovery
 *
 * \sa Route53RecoveryReadinessClient::listCells
 */

/*!
 * Constructs a ListCellsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCellsResponse::ListCellsResponse(
        const ListCellsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53RecoveryReadinessResponse(new ListCellsResponsePrivate(this), parent)
{
    setRequest(new ListCellsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCellsRequest * ListCellsResponse::request() const
{
    Q_D(const ListCellsResponse);
    return static_cast<const ListCellsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Route53RecoveryReadiness ListCells \a response.
 */
void ListCellsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCellsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Route53RecoveryReadiness::ListCellsResponsePrivate
 * \brief The ListCellsResponsePrivate class provides private implementation for ListCellsResponse.
 * \internal
 *
 * \inmodule QtAwsRoute53RecoveryReadiness
 */

/*!
 * Constructs a ListCellsResponsePrivate object with public implementation \a q.
 */
ListCellsResponsePrivate::ListCellsResponsePrivate(
    ListCellsResponse * const q) : Route53RecoveryReadinessResponsePrivate(q)
{

}

/*!
 * Parses a Route53RecoveryReadiness ListCells response element from \a xml.
 */
void ListCellsResponsePrivate::parseListCellsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCellsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Route53RecoveryReadiness
} // namespace QtAws
