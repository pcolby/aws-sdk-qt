// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexportresponse.h"
#include "deleteexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteExportResponse
 * \brief The DeleteExportResponse class provides an interace for LexModelsV2 DeleteExport responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteExport
 */

/*!
 * Constructs a DeleteExportResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteExportResponse::DeleteExportResponse(
        const DeleteExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteExportResponsePrivate(this), parent)
{
    setRequest(new DeleteExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteExportRequest * DeleteExportResponse::request() const
{
    Q_D(const DeleteExportResponse);
    return static_cast<const DeleteExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteExport \a response.
 */
void DeleteExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteExportResponsePrivate
 * \brief The DeleteExportResponsePrivate class provides private implementation for DeleteExportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteExportResponsePrivate object with public implementation \a q.
 */
DeleteExportResponsePrivate::DeleteExportResponsePrivate(
    DeleteExportResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteExport response element from \a xml.
 */
void DeleteExportResponsePrivate::parseDeleteExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
