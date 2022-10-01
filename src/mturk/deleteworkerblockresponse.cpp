// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteworkerblockresponse.h"
#include "deleteworkerblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockResponse
 * \brief The DeleteWorkerBlockResponse class provides an interace for MTurk DeleteWorkerBlock responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::deleteWorkerBlock
 */

/*!
 * Constructs a DeleteWorkerBlockResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkerBlockResponse::DeleteWorkerBlockResponse(
        const DeleteWorkerBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new DeleteWorkerBlockResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkerBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkerBlockRequest * DeleteWorkerBlockResponse::request() const
{
    Q_D(const DeleteWorkerBlockResponse);
    return static_cast<const DeleteWorkerBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk DeleteWorkerBlock \a response.
 */
void DeleteWorkerBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkerBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::DeleteWorkerBlockResponsePrivate
 * \brief The DeleteWorkerBlockResponsePrivate class provides private implementation for DeleteWorkerBlockResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a DeleteWorkerBlockResponsePrivate object with public implementation \a q.
 */
DeleteWorkerBlockResponsePrivate::DeleteWorkerBlockResponsePrivate(
    DeleteWorkerBlockResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk DeleteWorkerBlock response element from \a xml.
 */
void DeleteWorkerBlockResponsePrivate::parseDeleteWorkerBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkerBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
