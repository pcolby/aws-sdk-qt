// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteregistryresponse.h"
#include "deleteregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteRegistryResponse
 * \brief The DeleteRegistryResponse class provides an interace for Glue DeleteRegistry responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteRegistry
 */

/*!
 * Constructs a DeleteRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRegistryResponse::DeleteRegistryResponse(
        const DeleteRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteRegistryResponsePrivate(this), parent)
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
 * Parses a successful Glue DeleteRegistry \a response.
 */
void DeleteRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::DeleteRegistryResponsePrivate
 * \brief The DeleteRegistryResponsePrivate class provides private implementation for DeleteRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteRegistryResponsePrivate object with public implementation \a q.
 */
DeleteRegistryResponsePrivate::DeleteRegistryResponsePrivate(
    DeleteRegistryResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue DeleteRegistry response element from \a xml.
 */
void DeleteRegistryResponsePrivate::parseDeleteRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
