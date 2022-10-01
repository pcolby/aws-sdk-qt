// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteknowledgebaseresponse.h"
#include "deleteknowledgebaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::DeleteKnowledgeBaseResponse
 * \brief The DeleteKnowledgeBaseResponse class provides an interace for Wisdom DeleteKnowledgeBase responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::deleteKnowledgeBase
 */

/*!
 * Constructs a DeleteKnowledgeBaseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteKnowledgeBaseResponse::DeleteKnowledgeBaseResponse(
        const DeleteKnowledgeBaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new DeleteKnowledgeBaseResponsePrivate(this), parent)
{
    setRequest(new DeleteKnowledgeBaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteKnowledgeBaseRequest * DeleteKnowledgeBaseResponse::request() const
{
    Q_D(const DeleteKnowledgeBaseResponse);
    return static_cast<const DeleteKnowledgeBaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom DeleteKnowledgeBase \a response.
 */
void DeleteKnowledgeBaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteKnowledgeBaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::DeleteKnowledgeBaseResponsePrivate
 * \brief The DeleteKnowledgeBaseResponsePrivate class provides private implementation for DeleteKnowledgeBaseResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a DeleteKnowledgeBaseResponsePrivate object with public implementation \a q.
 */
DeleteKnowledgeBaseResponsePrivate::DeleteKnowledgeBaseResponsePrivate(
    DeleteKnowledgeBaseResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom DeleteKnowledgeBase response element from \a xml.
 */
void DeleteKnowledgeBaseResponsePrivate::parseDeleteKnowledgeBaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteKnowledgeBaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
