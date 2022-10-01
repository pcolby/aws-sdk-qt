// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListDatasetsResponse
 * \brief The ListDatasetsResponse class provides an interace for FinspaceData ListDatasets responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listDatasets
 */

/*!
 * Constructs a ListDatasetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetsResponse::ListDatasetsResponse(
        const ListDatasetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListDatasetsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetsRequest * ListDatasetsResponse::request() const
{
    Q_D(const ListDatasetsResponse);
    return static_cast<const ListDatasetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListDatasets \a response.
 */
void ListDatasetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListDatasetsResponsePrivate
 * \brief The ListDatasetsResponsePrivate class provides private implementation for ListDatasetsResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListDatasetsResponsePrivate object with public implementation \a q.
 */
ListDatasetsResponsePrivate::ListDatasetsResponsePrivate(
    ListDatasetsResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListDatasets response element from \a xml.
 */
void ListDatasetsResponsePrivate::parseListDatasetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
