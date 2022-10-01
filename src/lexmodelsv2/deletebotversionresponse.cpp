// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotversionresponse.h"
#include "deletebotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotVersionResponse
 * \brief The DeleteBotVersionResponse class provides an interace for LexModelsV2 DeleteBotVersion responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotVersion
 */

/*!
 * Constructs a DeleteBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotVersionResponse::DeleteBotVersionResponse(
        const DeleteBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteBotVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotVersionRequest * DeleteBotVersionResponse::request() const
{
    Q_D(const DeleteBotVersionResponse);
    return static_cast<const DeleteBotVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteBotVersion \a response.
 */
void DeleteBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotVersionResponsePrivate
 * \brief The DeleteBotVersionResponsePrivate class provides private implementation for DeleteBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotVersionResponsePrivate object with public implementation \a q.
 */
DeleteBotVersionResponsePrivate::DeleteBotVersionResponsePrivate(
    DeleteBotVersionResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteBotVersion response element from \a xml.
 */
void DeleteBotVersionResponsePrivate::parseDeleteBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
