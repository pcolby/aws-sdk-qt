// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintentversionresponse.h"
#include "deleteintentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentVersionResponse
 * \brief The DeleteIntentVersionResponse class provides an interace for LexModelBuilding DeleteIntentVersion responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteIntentVersion
 */

/*!
 * Constructs a DeleteIntentVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntentVersionResponse::DeleteIntentVersionResponse(
        const DeleteIntentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteIntentVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntentVersionRequest * DeleteIntentVersionResponse::request() const
{
    Q_D(const DeleteIntentVersionResponse);
    return static_cast<const DeleteIntentVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteIntentVersion \a response.
 */
void DeleteIntentVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentVersionResponsePrivate
 * \brief The DeleteIntentVersionResponsePrivate class provides private implementation for DeleteIntentVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteIntentVersionResponsePrivate object with public implementation \a q.
 */
DeleteIntentVersionResponsePrivate::DeleteIntentVersionResponsePrivate(
    DeleteIntentVersionResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteIntentVersion response element from \a xml.
 */
void DeleteIntentVersionResponsePrivate::parseDeleteIntentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
