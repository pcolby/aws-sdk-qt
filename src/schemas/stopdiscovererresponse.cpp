// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdiscovererresponse.h"
#include "stopdiscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::StopDiscovererResponse
 * \brief The StopDiscovererResponse class provides an interace for Schemas StopDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::stopDiscoverer
 */

/*!
 * Constructs a StopDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
StopDiscovererResponse::StopDiscovererResponse(
        const StopDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new StopDiscovererResponsePrivate(this), parent)
{
    setRequest(new StopDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDiscovererRequest * StopDiscovererResponse::request() const
{
    Q_D(const StopDiscovererResponse);
    return static_cast<const StopDiscovererRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas StopDiscoverer \a response.
 */
void StopDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::StopDiscovererResponsePrivate
 * \brief The StopDiscovererResponsePrivate class provides private implementation for StopDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a StopDiscovererResponsePrivate object with public implementation \a q.
 */
StopDiscovererResponsePrivate::StopDiscovererResponsePrivate(
    StopDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas StopDiscoverer response element from \a xml.
 */
void StopDiscovererResponsePrivate::parseStopDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
