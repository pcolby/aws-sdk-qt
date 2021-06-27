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

#include "createexportresponse.h"
#include "createexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateExportResponse
 * \brief The CreateExportResponse class provides an interace for LexModelsV2 CreateExport responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createExport
 */

/*!
 * Constructs a CreateExportResponse object for \a reply to \a request, with parent \a parent.
 */
CreateExportResponse::CreateExportResponse(
        const CreateExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateExportResponsePrivate(this), parent)
{
    setRequest(new CreateExportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateExportRequest * CreateExportResponse::request() const
{
    return static_cast<const CreateExportRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateExport \a response.
 */
void CreateExportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateExportResponsePrivate
 * \brief The CreateExportResponsePrivate class provides private implementation for CreateExportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateExportResponsePrivate object with public implementation \a q.
 */
CreateExportResponsePrivate::CreateExportResponsePrivate(
    CreateExportResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateExport response element from \a xml.
 */
void CreateExportResponsePrivate::parseCreateExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
