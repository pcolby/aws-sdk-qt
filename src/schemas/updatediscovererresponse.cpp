// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatediscovererresponse.h"
#include "updatediscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateDiscovererResponse
 * \brief The UpdateDiscovererResponse class provides an interace for Schemas UpdateDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateDiscoverer
 */

/*!
 * Constructs a UpdateDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDiscovererResponse::UpdateDiscovererResponse(
        const UpdateDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new UpdateDiscovererResponsePrivate(this), parent)
{
    setRequest(new UpdateDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDiscovererRequest * UpdateDiscovererResponse::request() const
{
    Q_D(const UpdateDiscovererResponse);
    return static_cast<const UpdateDiscovererRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas UpdateDiscoverer \a response.
 */
void UpdateDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::UpdateDiscovererResponsePrivate
 * \brief The UpdateDiscovererResponsePrivate class provides private implementation for UpdateDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateDiscovererResponsePrivate object with public implementation \a q.
 */
UpdateDiscovererResponsePrivate::UpdateDiscovererResponsePrivate(
    UpdateDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas UpdateDiscoverer response element from \a xml.
 */
void UpdateDiscovererResponsePrivate::parseUpdateDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
