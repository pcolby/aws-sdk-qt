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

#include "createresourcepolicyresponse.h"
#include "createresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyResponse
 * \brief The CreateResourcePolicyResponse class provides an interace for LexModelsV2 CreateResourcePolicy responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createResourcePolicy
 */

/*!
 * Constructs a CreateResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateResourcePolicyResponse::CreateResourcePolicyResponse(
        const CreateResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new CreateResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateResourcePolicyRequest * CreateResourcePolicyResponse::request() const
{
    return static_cast<const CreateResourcePolicyRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateResourcePolicy \a response.
 */
void CreateResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateResourcePolicyResponsePrivate
 * \brief The CreateResourcePolicyResponsePrivate class provides private implementation for CreateResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateResourcePolicyResponsePrivate object with public implementation \a q.
 */
CreateResourcePolicyResponsePrivate::CreateResourcePolicyResponsePrivate(
    CreateResourcePolicyResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateResourcePolicy response element from \a xml.
 */
void CreateResourcePolicyResponsePrivate::parseCreateResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
