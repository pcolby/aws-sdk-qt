// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createknowledgebaseresponse.h"
#include "createknowledgebaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::CreateKnowledgeBaseResponse
 * \brief The CreateKnowledgeBaseResponse class provides an interace for Wisdom CreateKnowledgeBase responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::createKnowledgeBase
 */

/*!
 * Constructs a CreateKnowledgeBaseResponse object for \a reply to \a request, with parent \a parent.
 */
CreateKnowledgeBaseResponse::CreateKnowledgeBaseResponse(
        const CreateKnowledgeBaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new CreateKnowledgeBaseResponsePrivate(this), parent)
{
    setRequest(new CreateKnowledgeBaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateKnowledgeBaseRequest * CreateKnowledgeBaseResponse::request() const
{
    Q_D(const CreateKnowledgeBaseResponse);
    return static_cast<const CreateKnowledgeBaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom CreateKnowledgeBase \a response.
 */
void CreateKnowledgeBaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateKnowledgeBaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::CreateKnowledgeBaseResponsePrivate
 * \brief The CreateKnowledgeBaseResponsePrivate class provides private implementation for CreateKnowledgeBaseResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a CreateKnowledgeBaseResponsePrivate object with public implementation \a q.
 */
CreateKnowledgeBaseResponsePrivate::CreateKnowledgeBaseResponsePrivate(
    CreateKnowledgeBaseResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom CreateKnowledgeBase response element from \a xml.
 */
void CreateKnowledgeBaseResponsePrivate::parseCreateKnowledgeBaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateKnowledgeBaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
