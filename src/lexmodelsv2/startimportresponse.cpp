// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimportresponse.h"
#include "startimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::StartImportResponse
 * \brief The StartImportResponse class provides an interace for LexModelsV2 StartImport responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::startImport
 */

/*!
 * Constructs a StartImportResponse object for \a reply to \a request, with parent \a parent.
 */
StartImportResponse::StartImportResponse(
        const StartImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new StartImportResponsePrivate(this), parent)
{
    setRequest(new StartImportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImportRequest * StartImportResponse::request() const
{
    Q_D(const StartImportResponse);
    return static_cast<const StartImportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 StartImport \a response.
 */
void StartImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::StartImportResponsePrivate
 * \brief The StartImportResponsePrivate class provides private implementation for StartImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a StartImportResponsePrivate object with public implementation \a q.
 */
StartImportResponsePrivate::StartImportResponsePrivate(
    StartImportResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 StartImport response element from \a xml.
 */
void StartImportResponsePrivate::parseStartImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
