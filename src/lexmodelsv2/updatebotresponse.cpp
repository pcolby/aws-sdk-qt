// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebotresponse.h"
#include "updatebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotResponse
 * \brief The UpdateBotResponse class provides an interace for LexModelsV2 UpdateBot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBot
 */

/*!
 * Constructs a UpdateBotResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBotResponse::UpdateBotResponse(
        const UpdateBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateBotResponsePrivate(this), parent)
{
    setRequest(new UpdateBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBotRequest * UpdateBotResponse::request() const
{
    Q_D(const UpdateBotResponse);
    return static_cast<const UpdateBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateBot \a response.
 */
void UpdateBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotResponsePrivate
 * \brief The UpdateBotResponsePrivate class provides private implementation for UpdateBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotResponsePrivate object with public implementation \a q.
 */
UpdateBotResponsePrivate::UpdateBotResponsePrivate(
    UpdateBotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateBot response element from \a xml.
 */
void UpdateBotResponsePrivate::parseUpdateBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
