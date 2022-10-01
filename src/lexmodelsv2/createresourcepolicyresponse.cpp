// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const CreateResourcePolicyResponse);
    return static_cast<const CreateResourcePolicyRequest *>(d->request);
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
