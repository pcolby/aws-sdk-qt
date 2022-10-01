// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintentresponse.h"
#include "deleteintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteIntentResponse
 * \brief The DeleteIntentResponse class provides an interace for LexModelsV2 DeleteIntent responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteIntent
 */

/*!
 * Constructs a DeleteIntentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntentResponse::DeleteIntentResponse(
        const DeleteIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteIntentResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntentRequest * DeleteIntentResponse::request() const
{
    Q_D(const DeleteIntentResponse);
    return static_cast<const DeleteIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteIntent \a response.
 */
void DeleteIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteIntentResponsePrivate
 * \brief The DeleteIntentResponsePrivate class provides private implementation for DeleteIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteIntentResponsePrivate object with public implementation \a q.
 */
DeleteIntentResponsePrivate::DeleteIntentResponsePrivate(
    DeleteIntentResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteIntent response element from \a xml.
 */
void DeleteIntentResponsePrivate::parseDeleteIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
