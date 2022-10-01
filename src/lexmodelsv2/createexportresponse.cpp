// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateExportResponse);
    return static_cast<const CreateExportRequest *>(d->request);
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
