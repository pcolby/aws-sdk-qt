// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteutterancesresponse.h"
#include "deleteutterancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteUtterancesResponse
 * \brief The DeleteUtterancesResponse class provides an interace for LexModelsV2 DeleteUtterances responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteUtterances
 */

/*!
 * Constructs a DeleteUtterancesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUtterancesResponse::DeleteUtterancesResponse(
        const DeleteUtterancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteUtterancesResponsePrivate(this), parent)
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
 * Parses a successful LexModelsV2 DeleteUtterances \a response.
 */
void DeleteUtterancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUtterancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteUtterancesResponsePrivate
 * \brief The DeleteUtterancesResponsePrivate class provides private implementation for DeleteUtterancesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteUtterancesResponsePrivate object with public implementation \a q.
 */
DeleteUtterancesResponsePrivate::DeleteUtterancesResponsePrivate(
    DeleteUtterancesResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteUtterances response element from \a xml.
 */
void DeleteUtterancesResponsePrivate::parseDeleteUtterancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUtterancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
