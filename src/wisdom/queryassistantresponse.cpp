// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryassistantresponse.h"
#include "queryassistantresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::QueryAssistantResponse
 * \brief The QueryAssistantResponse class provides an interace for Wisdom QueryAssistant responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::queryAssistant
 */

/*!
 * Constructs a QueryAssistantResponse object for \a reply to \a request, with parent \a parent.
 */
QueryAssistantResponse::QueryAssistantResponse(
        const QueryAssistantRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new QueryAssistantResponsePrivate(this), parent)
{
    setRequest(new QueryAssistantRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryAssistantRequest * QueryAssistantResponse::request() const
{
    Q_D(const QueryAssistantResponse);
    return static_cast<const QueryAssistantRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom QueryAssistant \a response.
 */
void QueryAssistantResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryAssistantResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::QueryAssistantResponsePrivate
 * \brief The QueryAssistantResponsePrivate class provides private implementation for QueryAssistantResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a QueryAssistantResponsePrivate object with public implementation \a q.
 */
QueryAssistantResponsePrivate::QueryAssistantResponsePrivate(
    QueryAssistantResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom QueryAssistant response element from \a xml.
 */
void QueryAssistantResponsePrivate::parseQueryAssistantResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryAssistantResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
