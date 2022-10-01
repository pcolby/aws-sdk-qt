/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
