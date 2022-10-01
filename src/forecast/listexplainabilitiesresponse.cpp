// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexplainabilitiesresponse.h"
#include "listexplainabilitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListExplainabilitiesResponse
 * \brief The ListExplainabilitiesResponse class provides an interace for Forecast ListExplainabilities responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listExplainabilities
 */

/*!
 * Constructs a ListExplainabilitiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListExplainabilitiesResponse::ListExplainabilitiesResponse(
        const ListExplainabilitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListExplainabilitiesResponsePrivate(this), parent)
{
    setRequest(new ListExplainabilitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExplainabilitiesRequest * ListExplainabilitiesResponse::request() const
{
    Q_D(const ListExplainabilitiesResponse);
    return static_cast<const ListExplainabilitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListExplainabilities \a response.
 */
void ListExplainabilitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExplainabilitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListExplainabilitiesResponsePrivate
 * \brief The ListExplainabilitiesResponsePrivate class provides private implementation for ListExplainabilitiesResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListExplainabilitiesResponsePrivate object with public implementation \a q.
 */
ListExplainabilitiesResponsePrivate::ListExplainabilitiesResponsePrivate(
    ListExplainabilitiesResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListExplainabilities response element from \a xml.
 */
void ListExplainabilitiesResponsePrivate::parseListExplainabilitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExplainabilitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
