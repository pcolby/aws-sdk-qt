// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcatalogimportstatusresponse.h"
#include "getcatalogimportstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCatalogImportStatusResponse
 * \brief The GetCatalogImportStatusResponse class provides an interace for Glue GetCatalogImportStatus responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getCatalogImportStatus
 */

/*!
 * Constructs a GetCatalogImportStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetCatalogImportStatusResponse::GetCatalogImportStatusResponse(
        const GetCatalogImportStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCatalogImportStatusResponsePrivate(this), parent)
{
    setRequest(new GetCatalogImportStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCatalogImportStatusRequest * GetCatalogImportStatusResponse::request() const
{
    Q_D(const GetCatalogImportStatusResponse);
    return static_cast<const GetCatalogImportStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetCatalogImportStatus \a response.
 */
void GetCatalogImportStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCatalogImportStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetCatalogImportStatusResponsePrivate
 * \brief The GetCatalogImportStatusResponsePrivate class provides private implementation for GetCatalogImportStatusResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCatalogImportStatusResponsePrivate object with public implementation \a q.
 */
GetCatalogImportStatusResponsePrivate::GetCatalogImportStatusResponsePrivate(
    GetCatalogImportStatusResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetCatalogImportStatus response element from \a xml.
 */
void GetCatalogImportStatusResponsePrivate::parseGetCatalogImportStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCatalogImportStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
