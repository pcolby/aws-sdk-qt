// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexplainabilityexportsresponse.h"
#include "listexplainabilityexportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListExplainabilityExportsResponse
 * \brief The ListExplainabilityExportsResponse class provides an interace for Forecast ListExplainabilityExports responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listExplainabilityExports
 */

/*!
 * Constructs a ListExplainabilityExportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListExplainabilityExportsResponse::ListExplainabilityExportsResponse(
        const ListExplainabilityExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListExplainabilityExportsResponsePrivate(this), parent)
{
    setRequest(new ListExplainabilityExportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListExplainabilityExportsRequest * ListExplainabilityExportsResponse::request() const
{
    Q_D(const ListExplainabilityExportsResponse);
    return static_cast<const ListExplainabilityExportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListExplainabilityExports \a response.
 */
void ListExplainabilityExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListExplainabilityExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListExplainabilityExportsResponsePrivate
 * \brief The ListExplainabilityExportsResponsePrivate class provides private implementation for ListExplainabilityExportsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListExplainabilityExportsResponsePrivate object with public implementation \a q.
 */
ListExplainabilityExportsResponsePrivate::ListExplainabilityExportsResponsePrivate(
    ListExplainabilityExportsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListExplainabilityExports response element from \a xml.
 */
void ListExplainabilityExportsResponsePrivate::parseListExplainabilityExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListExplainabilityExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
