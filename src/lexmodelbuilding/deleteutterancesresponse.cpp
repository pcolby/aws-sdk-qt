// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteutterancesresponse.h"
#include "deleteutterancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteUtterancesResponse
 * \brief The DeleteUtterancesResponse class provides an interace for LexModelBuilding DeleteUtterances responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteUtterances
 */

/*!
 * Constructs a DeleteUtterancesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUtterancesResponse::DeleteUtterancesResponse(
        const DeleteUtterancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteUtterancesResponsePrivate(this), parent)
{
    setRequest(new DeleteUtterancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUtterancesRequest * DeleteUtterancesResponse::request() const
{
    Q_D(const DeleteUtterancesResponse);
    return static_cast<const DeleteUtterancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteUtterances \a response.
 */
void DeleteUtterancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUtterancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteUtterancesResponsePrivate
 * \brief The DeleteUtterancesResponsePrivate class provides private implementation for DeleteUtterancesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteUtterancesResponsePrivate object with public implementation \a q.
 */
DeleteUtterancesResponsePrivate::DeleteUtterancesResponsePrivate(
    DeleteUtterancesResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteUtterances response element from \a xml.
 */
void DeleteUtterancesResponsePrivate::parseDeleteUtterancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUtterancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
