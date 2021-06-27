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

#include "createresourcepolicystatementresponse.h"
#include "createresourcepolicystatementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyStatementResponse
 * \brief The CreateResourcePolicyStatementResponse class provides an interace for LexModelsV2 CreateResourcePolicyStatement responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createResourcePolicyStatement
 */

/*!
 * Constructs a CreateResourcePolicyStatementResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourcePolicyStatementResponse::CreateResourcePolicyStatementResponse(
        const CreateResourcePolicyStatementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateResourcePolicyStatementResponsePrivate(this), parent)
{
    setRequest(new CreateResourcePolicyStatementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourcePolicyStatementRequest * CreateResourcePolicyStatementResponse::request() const
{
    return static_cast<const CreateResourcePolicyStatementRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateResourcePolicyStatement \a response.
 */
void CreateResourcePolicyStatementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourcePolicyStatementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyStatementResponsePrivate
 * \brief The CreateResourcePolicyStatementResponsePrivate class provides private implementation for CreateResourcePolicyStatementResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateResourcePolicyStatementResponsePrivate object with public implementation \a q.
 */
CreateResourcePolicyStatementResponsePrivate::CreateResourcePolicyStatementResponsePrivate(
    CreateResourcePolicyStatementResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateResourcePolicyStatement response element from \a xml.
 */
void CreateResourcePolicyStatementResponsePrivate::parseCreateResourcePolicyStatementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourcePolicyStatementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
