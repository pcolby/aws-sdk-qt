// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteresourcepolicystatementresponse.h"
#include "deleteresourcepolicystatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteResourcePolicyStatementResponse
 * \brief The DeleteResourcePolicyStatementResponse class provides an interace for LexModelsV2 DeleteResourcePolicyStatement responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteResourcePolicyStatement
 */

/*!
 * Constructs a DeleteResourcePolicyStatementResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourcePolicyStatementResponse::DeleteResourcePolicyStatementResponse(
        const DeleteResourcePolicyStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteResourcePolicyStatementResponsePrivate(this), parent)
{
    setRequest(new DeleteResourcePolicyStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourcePolicyStatementRequest * DeleteResourcePolicyStatementResponse::request() const
{
    Q_D(const DeleteResourcePolicyStatementResponse);
    return static_cast<const DeleteResourcePolicyStatementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteResourcePolicyStatement \a response.
 */
void DeleteResourcePolicyStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourcePolicyStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteResourcePolicyStatementResponsePrivate
 * \brief The DeleteResourcePolicyStatementResponsePrivate class provides private implementation for DeleteResourcePolicyStatementResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteResourcePolicyStatementResponsePrivate object with public implementation \a q.
 */
DeleteResourcePolicyStatementResponsePrivate::DeleteResourcePolicyStatementResponsePrivate(
    DeleteResourcePolicyStatementResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteResourcePolicyStatement response element from \a xml.
 */
void DeleteResourcePolicyStatementResponsePrivate::parseDeleteResourcePolicyStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourcePolicyStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
