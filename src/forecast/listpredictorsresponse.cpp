// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpredictorsresponse.h"
#include "listpredictorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListPredictorsResponse
 * \brief The ListPredictorsResponse class provides an interace for Forecast ListPredictors responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listPredictors
 */

/*!
 * Constructs a ListPredictorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPredictorsResponse::ListPredictorsResponse(
        const ListPredictorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListPredictorsResponsePrivate(this), parent)
{
    setRequest(new ListPredictorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPredictorsRequest * ListPredictorsResponse::request() const
{
    Q_D(const ListPredictorsResponse);
    return static_cast<const ListPredictorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListPredictors \a response.
 */
void ListPredictorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPredictorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListPredictorsResponsePrivate
 * \brief The ListPredictorsResponsePrivate class provides private implementation for ListPredictorsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListPredictorsResponsePrivate object with public implementation \a q.
 */
ListPredictorsResponsePrivate::ListPredictorsResponsePrivate(
    ListPredictorsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListPredictors response element from \a xml.
 */
void ListPredictorsResponsePrivate::parseListPredictorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPredictorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
