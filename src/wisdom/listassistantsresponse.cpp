// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassistantsresponse.h"
#include "listassistantsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListAssistantsResponse
 * \brief The ListAssistantsResponse class provides an interace for Wisdom ListAssistants responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listAssistants
 */

/*!
 * Constructs a ListAssistantsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssistantsResponse::ListAssistantsResponse(
        const ListAssistantsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new ListAssistantsResponsePrivate(this), parent)
{
    setRequest(new ListAssistantsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssistantsRequest * ListAssistantsResponse::request() const
{
    Q_D(const ListAssistantsResponse);
    return static_cast<const ListAssistantsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom ListAssistants \a response.
 */
void ListAssistantsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssistantsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::ListAssistantsResponsePrivate
 * \brief The ListAssistantsResponsePrivate class provides private implementation for ListAssistantsResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListAssistantsResponsePrivate object with public implementation \a q.
 */
ListAssistantsResponsePrivate::ListAssistantsResponsePrivate(
    ListAssistantsResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom ListAssistants response element from \a xml.
 */
void ListAssistantsResponsePrivate::parseListAssistantsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssistantsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
