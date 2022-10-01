// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexportresponse.h"
#include "updateexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateExportResponse
 * \brief The UpdateExportResponse class provides an interace for LexModelsV2 UpdateExport responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateExport
 */

/*!
 * Constructs a UpdateExportResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateExportResponse::UpdateExportResponse(
        const UpdateExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateExportResponsePrivate(this), parent)
{
    setRequest(new UpdateExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateExportRequest * UpdateExportResponse::request() const
{
    Q_D(const UpdateExportResponse);
    return static_cast<const UpdateExportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateExport \a response.
 */
void UpdateExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateExportResponsePrivate
 * \brief The UpdateExportResponsePrivate class provides private implementation for UpdateExportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateExportResponsePrivate object with public implementation \a q.
 */
UpdateExportResponsePrivate::UpdateExportResponsePrivate(
    UpdateExportResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateExport response element from \a xml.
 */
void UpdateExportResponsePrivate::parseUpdateExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
