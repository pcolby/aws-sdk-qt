// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcetreeresponse.h"
#include "deleteresourcetreeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteResourceTreeResponse
 * \brief The DeleteResourceTreeResponse class provides an interace for Forecast DeleteResourceTree responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteResourceTree
 */

/*!
 * Constructs a DeleteResourceTreeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceTreeResponse::DeleteResourceTreeResponse(
        const DeleteResourceTreeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteResourceTreeResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceTreeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceTreeRequest * DeleteResourceTreeResponse::request() const
{
    Q_D(const DeleteResourceTreeResponse);
    return static_cast<const DeleteResourceTreeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteResourceTree \a response.
 */
void DeleteResourceTreeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceTreeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteResourceTreeResponsePrivate
 * \brief The DeleteResourceTreeResponsePrivate class provides private implementation for DeleteResourceTreeResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteResourceTreeResponsePrivate object with public implementation \a q.
 */
DeleteResourceTreeResponsePrivate::DeleteResourceTreeResponsePrivate(
    DeleteResourceTreeResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteResourceTree response element from \a xml.
 */
void DeleteResourceTreeResponsePrivate::parseDeleteResourceTreeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceTreeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
