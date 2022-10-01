// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getknowledgebaseresponse.h"
#include "getknowledgebaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetKnowledgeBaseResponse
 * \brief The GetKnowledgeBaseResponse class provides an interace for Wisdom GetKnowledgeBase responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getKnowledgeBase
 */

/*!
 * Constructs a GetKnowledgeBaseResponse object for \a reply to \a request, with parent \a parent.
 */
GetKnowledgeBaseResponse::GetKnowledgeBaseResponse(
        const GetKnowledgeBaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new GetKnowledgeBaseResponsePrivate(this), parent)
{
    setRequest(new GetKnowledgeBaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetKnowledgeBaseRequest * GetKnowledgeBaseResponse::request() const
{
    Q_D(const GetKnowledgeBaseResponse);
    return static_cast<const GetKnowledgeBaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom GetKnowledgeBase \a response.
 */
void GetKnowledgeBaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetKnowledgeBaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::GetKnowledgeBaseResponsePrivate
 * \brief The GetKnowledgeBaseResponsePrivate class provides private implementation for GetKnowledgeBaseResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetKnowledgeBaseResponsePrivate object with public implementation \a q.
 */
GetKnowledgeBaseResponsePrivate::GetKnowledgeBaseResponsePrivate(
    GetKnowledgeBaseResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom GetKnowledgeBase response element from \a xml.
 */
void GetKnowledgeBaseResponsePrivate::parseGetKnowledgeBaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetKnowledgeBaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
