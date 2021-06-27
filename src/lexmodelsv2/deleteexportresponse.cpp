/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const DeleteExportRequest *>(LexModelsV2Response::request());
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
