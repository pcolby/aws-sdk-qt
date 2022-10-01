// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdiscovererresponse.h"
#include "startdiscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::StartDiscovererResponse
 * \brief The StartDiscovererResponse class provides an interace for Schemas StartDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::startDiscoverer
 */

/*!
 * Constructs a StartDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
StartDiscovererResponse::StartDiscovererResponse(
        const StartDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new StartDiscovererResponsePrivate(this), parent)
{
    setRequest(new StartDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDiscovererRequest * StartDiscovererResponse::request() const
{
    Q_D(const StartDiscovererResponse);
    return static_cast<const StartDiscovererRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas StartDiscoverer \a response.
 */
void StartDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::StartDiscovererResponsePrivate
 * \brief The StartDiscovererResponsePrivate class provides private implementation for StartDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a StartDiscovererResponsePrivate object with public implementation \a q.
 */
StartDiscovererResponsePrivate::StartDiscovererResponsePrivate(
    StartDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas StartDiscoverer response element from \a xml.
 */
void StartDiscovererResponsePrivate::parseStartDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
