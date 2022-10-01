// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbotversionresponse.h"
#include "createbotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateBotVersionResponse
 * \brief The CreateBotVersionResponse class provides an interace for LexModelsV2 CreateBotVersion responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createBotVersion
 */

/*!
 * Constructs a CreateBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotVersionResponse::CreateBotVersionResponse(
        const CreateBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateBotVersionResponsePrivate(this), parent)
{
    setRequest(new CreateBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotVersionRequest * CreateBotVersionResponse::request() const
{
    Q_D(const CreateBotVersionResponse);
    return static_cast<const CreateBotVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateBotVersion \a response.
 */
void CreateBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateBotVersionResponsePrivate
 * \brief The CreateBotVersionResponsePrivate class provides private implementation for CreateBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateBotVersionResponsePrivate object with public implementation \a q.
 */
CreateBotVersionResponsePrivate::CreateBotVersionResponsePrivate(
    CreateBotVersionResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateBotVersion response element from \a xml.
 */
void CreateBotVersionResponsePrivate::parseCreateBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
