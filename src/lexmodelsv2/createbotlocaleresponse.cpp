// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbotlocaleresponse.h"
#include "createbotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotLocaleResponse
 * \brief The CreateBotLocaleResponse class provides an interace for LexModelsV2 CreateBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotLocale
 */

/*!
 * Constructs a CreateBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotLocaleResponse::CreateBotLocaleResponse(
        const CreateBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateBotLocaleResponsePrivate(this), parent)
{
    setRequest(new CreateBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotLocaleRequest * CreateBotLocaleResponse::request() const
{
    Q_D(const CreateBotLocaleResponse);
    return static_cast<const CreateBotLocaleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateBotLocale \a response.
 */
void CreateBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateBotLocaleResponsePrivate
 * \brief The CreateBotLocaleResponsePrivate class provides private implementation for CreateBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotLocaleResponsePrivate object with public implementation \a q.
 */
CreateBotLocaleResponsePrivate::CreateBotLocaleResponsePrivate(
    CreateBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateBotLocale response element from \a xml.
 */
void CreateBotLocaleResponsePrivate::parseCreateBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
