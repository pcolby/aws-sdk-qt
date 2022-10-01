// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportresponse.h"
#include "getimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetImportResponse
 * \brief The GetImportResponse class provides an interace for LexModelBuilding GetImport responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getImport
 */

/*!
 * Constructs a GetImportResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportResponse::GetImportResponse(
        const GetImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetImportResponsePrivate(this), parent)
{
    setRequest(new GetImportRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportRequest * GetImportResponse::request() const
{
    Q_D(const GetImportResponse);
    return static_cast<const GetImportRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetImport \a response.
 */
void GetImportResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetImportResponsePrivate
 * \brief The GetImportResponsePrivate class provides private implementation for GetImportResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetImportResponsePrivate object with public implementation \a q.
 */
GetImportResponsePrivate::GetImportResponsePrivate(
    GetImportResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetImport response element from \a xml.
 */
void GetImportResponsePrivate::parseGetImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
