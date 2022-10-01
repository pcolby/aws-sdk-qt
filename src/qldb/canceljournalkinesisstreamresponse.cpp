// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljournalkinesisstreamresponse.h"
#include "canceljournalkinesisstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::CancelJournalKinesisStreamResponse
 * \brief The CancelJournalKinesisStreamResponse class provides an interace for Qldb CancelJournalKinesisStream responses.
 *
 * \inmodule QtAwsQldb
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::cancelJournalKinesisStream
 */

/*!
 * Constructs a CancelJournalKinesisStreamResponse object for \a reply to \a request, with parent \a parent.
 */
CancelJournalKinesisStreamResponse::CancelJournalKinesisStreamResponse(
        const CancelJournalKinesisStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new CancelJournalKinesisStreamResponsePrivate(this), parent)
{
    setRequest(new CancelJournalKinesisStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelJournalKinesisStreamRequest * CancelJournalKinesisStreamResponse::request() const
{
    Q_D(const CancelJournalKinesisStreamResponse);
    return static_cast<const CancelJournalKinesisStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb CancelJournalKinesisStream \a response.
 */
void CancelJournalKinesisStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelJournalKinesisStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::CancelJournalKinesisStreamResponsePrivate
 * \brief The CancelJournalKinesisStreamResponsePrivate class provides private implementation for CancelJournalKinesisStreamResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a CancelJournalKinesisStreamResponsePrivate object with public implementation \a q.
 */
CancelJournalKinesisStreamResponsePrivate::CancelJournalKinesisStreamResponsePrivate(
    CancelJournalKinesisStreamResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb CancelJournalKinesisStream response element from \a xml.
 */
void CancelJournalKinesisStreamResponsePrivate::parseCancelJournalKinesisStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelJournalKinesisStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
