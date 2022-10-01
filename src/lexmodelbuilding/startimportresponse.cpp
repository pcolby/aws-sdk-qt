// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimportresponse.h"
#include "startimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::StartImportResponse
 * \brief The StartImportResponse class provides an interace for LexModelBuilding StartImport responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::startImport
 */

/*!
 * Constructs a StartImportResponse object for \a reply to \a request, with parent \a parent.
 */
StartImportResponse::StartImportResponse(
        const StartImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new StartImportResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuilding StartImport \a response.
 */
void StartImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::StartImportResponsePrivate
 * \brief The StartImportResponsePrivate class provides private implementation for StartImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a StartImportResponsePrivate object with public implementation \a q.
 */
StartImportResponsePrivate::StartImportResponsePrivate(
    StartImportResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding StartImport response element from \a xml.
 */
void StartImportResponsePrivate::parseStartImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
