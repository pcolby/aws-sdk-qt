// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsresponse.h"
#include "listdatasetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListDatasetsResponse
 * \brief The ListDatasetsResponse class provides an interace for Forecast ListDatasets responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listDatasets
 */

/*!
 * Constructs a ListDatasetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetsResponse::ListDatasetsResponse(
        const ListDatasetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListDatasetsResponsePrivate(this), parent)
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
 * Parses a successful Forecast ListDatasets \a response.
 */
void ListDatasetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListDatasetsResponsePrivate
 * \brief The ListDatasetsResponsePrivate class provides private implementation for ListDatasetsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListDatasetsResponsePrivate object with public implementation \a q.
 */
ListDatasetsResponsePrivate::ListDatasetsResponsePrivate(
    ListDatasetsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListDatasets response element from \a xml.
 */
void ListDatasetsResponsePrivate::parseListDatasetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
