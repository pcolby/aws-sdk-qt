// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listknowledgebasesresponse.h"
#include "listknowledgebasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListKnowledgeBasesResponse
 * \brief The ListKnowledgeBasesResponse class provides an interace for Wisdom ListKnowledgeBases responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listKnowledgeBases
 */

/*!
 * Constructs a ListKnowledgeBasesResponse object for \a reply to \a request, with parent \a parent.
 */
ListKnowledgeBasesResponse::ListKnowledgeBasesResponse(
        const ListKnowledgeBasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new ListKnowledgeBasesResponsePrivate(this), parent)
{
    setRequest(new ListKnowledgeBasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListKnowledgeBasesRequest * ListKnowledgeBasesResponse::request() const
{
    Q_D(const ListKnowledgeBasesResponse);
    return static_cast<const ListKnowledgeBasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom ListKnowledgeBases \a response.
 */
void ListKnowledgeBasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListKnowledgeBasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::ListKnowledgeBasesResponsePrivate
 * \brief The ListKnowledgeBasesResponsePrivate class provides private implementation for ListKnowledgeBasesResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListKnowledgeBasesResponsePrivate object with public implementation \a q.
 */
ListKnowledgeBasesResponsePrivate::ListKnowledgeBasesResponsePrivate(
    ListKnowledgeBasesResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom ListKnowledgeBases response element from \a xml.
 */
void ListKnowledgeBasesResponsePrivate::parseListKnowledgeBasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListKnowledgeBasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
