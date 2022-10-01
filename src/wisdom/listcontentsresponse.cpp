// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcontentsresponse.h"
#include "listcontentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::ListContentsResponse
 * \brief The ListContentsResponse class provides an interace for Wisdom ListContents responses.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::listContents
 */

/*!
 * Constructs a ListContentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListContentsResponse::ListContentsResponse(
        const ListContentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WisdomResponse(new ListContentsResponsePrivate(this), parent)
{
    setRequest(new ListContentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListContentsRequest * ListContentsResponse::request() const
{
    Q_D(const ListContentsResponse);
    return static_cast<const ListContentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Wisdom ListContents \a response.
 */
void ListContentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListContentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Wisdom::ListContentsResponsePrivate
 * \brief The ListContentsResponsePrivate class provides private implementation for ListContentsResponse.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a ListContentsResponsePrivate object with public implementation \a q.
 */
ListContentsResponsePrivate::ListContentsResponsePrivate(
    ListContentsResponse * const q) : WisdomResponsePrivate(q)
{

}

/*!
 * Parses a Wisdom ListContents response element from \a xml.
 */
void ListContentsResponsePrivate::parseListContentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Wisdom
} // namespace QtAws
