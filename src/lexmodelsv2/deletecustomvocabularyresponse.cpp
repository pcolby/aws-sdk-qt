// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomvocabularyresponse.h"
#include "deletecustomvocabularyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteCustomVocabularyResponse
 * \brief The DeleteCustomVocabularyResponse class provides an interace for LexModelsV2 DeleteCustomVocabulary responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteCustomVocabulary
 */

/*!
 * Constructs a DeleteCustomVocabularyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomVocabularyResponse::DeleteCustomVocabularyResponse(
        const DeleteCustomVocabularyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteCustomVocabularyResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomVocabularyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomVocabularyRequest * DeleteCustomVocabularyResponse::request() const
{
    Q_D(const DeleteCustomVocabularyResponse);
    return static_cast<const DeleteCustomVocabularyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteCustomVocabulary \a response.
 */
void DeleteCustomVocabularyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomVocabularyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteCustomVocabularyResponsePrivate
 * \brief The DeleteCustomVocabularyResponsePrivate class provides private implementation for DeleteCustomVocabularyResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteCustomVocabularyResponsePrivate object with public implementation \a q.
 */
DeleteCustomVocabularyResponsePrivate::DeleteCustomVocabularyResponsePrivate(
    DeleteCustomVocabularyResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteCustomVocabulary response element from \a xml.
 */
void DeleteCustomVocabularyResponsePrivate::parseDeleteCustomVocabularyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomVocabularyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
