// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteregistryresponse.h"
#include "deleteregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteRegistryResponse
 * \brief The DeleteRegistryResponse class provides an interace for Schemas DeleteRegistry responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteRegistry
 */

/*!
 * Constructs a DeleteRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRegistryResponse::DeleteRegistryResponse(
        const DeleteRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new DeleteRegistryResponsePrivate(this), parent)
{
    setRequest(new DeleteRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRegistryRequest * DeleteRegistryResponse::request() const
{
    Q_D(const DeleteRegistryResponse);
    return static_cast<const DeleteRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Schemas DeleteRegistry \a response.
 */
void DeleteRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::DeleteRegistryResponsePrivate
 * \brief The DeleteRegistryResponsePrivate class provides private implementation for DeleteRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteRegistryResponsePrivate object with public implementation \a q.
 */
DeleteRegistryResponsePrivate::DeleteRegistryResponsePrivate(
    DeleteRegistryResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas DeleteRegistry response element from \a xml.
 */
void DeleteRegistryResponsePrivate::parseDeleteRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
