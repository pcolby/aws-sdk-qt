// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwhatifanalysesresponse.h"
#include "listwhatifanalysesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListWhatIfAnalysesResponse
 * \brief The ListWhatIfAnalysesResponse class provides an interace for Forecast ListWhatIfAnalyses responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listWhatIfAnalyses
 */

/*!
 * Constructs a ListWhatIfAnalysesResponse object for \a reply to \a request, with parent \a parent.
 */
ListWhatIfAnalysesResponse::ListWhatIfAnalysesResponse(
        const ListWhatIfAnalysesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListWhatIfAnalysesResponsePrivate(this), parent)
{
    setRequest(new ListWhatIfAnalysesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWhatIfAnalysesRequest * ListWhatIfAnalysesResponse::request() const
{
    Q_D(const ListWhatIfAnalysesResponse);
    return static_cast<const ListWhatIfAnalysesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListWhatIfAnalyses \a response.
 */
void ListWhatIfAnalysesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWhatIfAnalysesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListWhatIfAnalysesResponsePrivate
 * \brief The ListWhatIfAnalysesResponsePrivate class provides private implementation for ListWhatIfAnalysesResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListWhatIfAnalysesResponsePrivate object with public implementation \a q.
 */
ListWhatIfAnalysesResponsePrivate::ListWhatIfAnalysesResponsePrivate(
    ListWhatIfAnalysesResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListWhatIfAnalyses response element from \a xml.
 */
void ListWhatIfAnalysesResponsePrivate::parseListWhatIfAnalysesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWhatIfAnalysesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
