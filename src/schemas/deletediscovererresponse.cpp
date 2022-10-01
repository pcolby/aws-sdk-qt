// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletediscovererresponse.h"
#include "deletediscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteDiscovererResponse
 * \brief The DeleteDiscovererResponse class provides an interace for Schemas DeleteDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteDiscoverer
 */

/*!
 * Constructs a DeleteDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDiscovererResponse::DeleteDiscovererResponse(
        const DeleteDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DeleteDiscovererResponsePrivate(this), parent)
{
    setRequest(new DeleteDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDiscovererRequest * DeleteDiscovererResponse::request() const
{
    Q_D(const DeleteDiscovererResponse);
    return static_cast<const DeleteDiscovererRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DeleteDiscoverer \a response.
 */
void DeleteDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DeleteDiscovererResponsePrivate
 * \brief The DeleteDiscovererResponsePrivate class provides private implementation for DeleteDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteDiscovererResponsePrivate object with public implementation \a q.
 */
DeleteDiscovererResponsePrivate::DeleteDiscovererResponsePrivate(
    DeleteDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DeleteDiscoverer response element from \a xml.
 */
void DeleteDiscovererResponsePrivate::parseDeleteDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
