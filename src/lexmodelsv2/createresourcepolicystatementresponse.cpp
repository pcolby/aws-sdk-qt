// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateResourcePolicyStatementResponse);
    return static_cast<const CreateResourcePolicyStatementRequest *>(d->request);
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
