/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    return static_cast<const DeleteResourcePolicyStatementRequest *>(LexModelsV2Response::request());
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
