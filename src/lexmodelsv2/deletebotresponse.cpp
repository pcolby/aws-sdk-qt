// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotresponse.h"
#include "deletebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotResponse
 * \brief The DeleteBotResponse class provides an interace for LexModelsV2 DeleteBot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBot
 */

/*!
 * Constructs a DeleteBotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotResponse::DeleteBotResponse(
        const DeleteBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteBotResponsePrivate(this), parent)
{
    setRequest(new DeleteBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotRequest * DeleteBotResponse::request() const
{
    Q_D(const DeleteBotResponse);
    return static_cast<const DeleteBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteBot \a response.
 */
void DeleteBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotResponsePrivate
 * \brief The DeleteBotResponsePrivate class provides private implementation for DeleteBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotResponsePrivate object with public implementation \a q.
 */
DeleteBotResponsePrivate::DeleteBotResponsePrivate(
    DeleteBotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteBot response element from \a xml.
 */
void DeleteBotResponsePrivate::parseDeleteBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
