// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkerblocksresponse.h"
#include "listworkerblocksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListWorkerBlocksResponse
 * \brief The ListWorkerBlocksResponse class provides an interace for MTurk ListWorkerBlocks responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listWorkerBlocks
 */

/*!
 * Constructs a ListWorkerBlocksResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkerBlocksResponse::ListWorkerBlocksResponse(
        const ListWorkerBlocksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListWorkerBlocksResponsePrivate(this), parent)
{
    setRequest(new ListWorkerBlocksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkerBlocksRequest * ListWorkerBlocksResponse::request() const
{
    Q_D(const ListWorkerBlocksResponse);
    return static_cast<const ListWorkerBlocksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListWorkerBlocks \a response.
 */
void ListWorkerBlocksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkerBlocksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListWorkerBlocksResponsePrivate
 * \brief The ListWorkerBlocksResponsePrivate class provides private implementation for ListWorkerBlocksResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListWorkerBlocksResponsePrivate object with public implementation \a q.
 */
ListWorkerBlocksResponsePrivate::ListWorkerBlocksResponsePrivate(
    ListWorkerBlocksResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListWorkerBlocks response element from \a xml.
 */
void ListWorkerBlocksResponsePrivate::parseListWorkerBlocksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkerBlocksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
