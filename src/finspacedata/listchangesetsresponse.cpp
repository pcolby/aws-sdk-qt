// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchangesetsresponse.h"
#include "listchangesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListChangesetsResponse
 * \brief The ListChangesetsResponse class provides an interace for FinspaceData ListChangesets responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listChangesets
 */

/*!
 * Constructs a ListChangesetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListChangesetsResponse::ListChangesetsResponse(
        const ListChangesetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListChangesetsResponsePrivate(this), parent)
{
    setRequest(new ListChangesetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChangesetsRequest * ListChangesetsResponse::request() const
{
    Q_D(const ListChangesetsResponse);
    return static_cast<const ListChangesetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListChangesets \a response.
 */
void ListChangesetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChangesetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListChangesetsResponsePrivate
 * \brief The ListChangesetsResponsePrivate class provides private implementation for ListChangesetsResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListChangesetsResponsePrivate object with public implementation \a q.
 */
ListChangesetsResponsePrivate::ListChangesetsResponsePrivate(
    ListChangesetsResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListChangesets response element from \a xml.
 */
void ListChangesetsResponsePrivate::parseListChangesetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChangesetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
