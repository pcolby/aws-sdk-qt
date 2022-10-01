// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataviewsresponse.h"
#include "listdataviewsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FinspaceData {

/*!
 * \class QtAws::FinspaceData::ListDataViewsResponse
 * \brief The ListDataViewsResponse class provides an interace for FinspaceData ListDataViews responses.
 *
 * \inmodule QtAwsFinspaceData
 *
 *  The FinSpace APIs let you take actions inside the
 *
 * \sa FinspaceDataClient::listDataViews
 */

/*!
 * Constructs a ListDataViewsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataViewsResponse::ListDataViewsResponse(
        const ListDataViewsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceDataResponse(new ListDataViewsResponsePrivate(this), parent)
{
    setRequest(new ListDataViewsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataViewsRequest * ListDataViewsResponse::request() const
{
    Q_D(const ListDataViewsResponse);
    return static_cast<const ListDataViewsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FinspaceData ListDataViews \a response.
 */
void ListDataViewsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataViewsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FinspaceData::ListDataViewsResponsePrivate
 * \brief The ListDataViewsResponsePrivate class provides private implementation for ListDataViewsResponse.
 * \internal
 *
 * \inmodule QtAwsFinspaceData
 */

/*!
 * Constructs a ListDataViewsResponsePrivate object with public implementation \a q.
 */
ListDataViewsResponsePrivate::ListDataViewsResponsePrivate(
    ListDataViewsResponse * const q) : FinspaceDataResponsePrivate(q)
{

}

/*!
 * Parses a FinspaceData ListDataViews response element from \a xml.
 */
void ListDataViewsResponsePrivate::parseListDataViewsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataViewsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FinspaceData
} // namespace QtAws
