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

#include "streamjournaltokinesisresponse.h"
#include "streamjournaltokinesisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::StreamJournalToKinesisResponse
 * \brief The StreamJournalToKinesisResponse class provides an interace for QLDB StreamJournalToKinesis responses.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::streamJournalToKinesis
 */

/*!
 * Constructs a StreamJournalToKinesisResponse object for \a reply to \a request, with parent \a parent.
 */
StreamJournalToKinesisResponse::StreamJournalToKinesisResponse(
        const StreamJournalToKinesisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QldbResponse(new StreamJournalToKinesisResponsePrivate(this), parent)
{
    setRequest(new StreamJournalToKinesisRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StreamJournalToKinesisRequest * StreamJournalToKinesisResponse::request() const
{
    return static_cast<const StreamJournalToKinesisRequest *>(QldbResponse::request());
}

/*!
 * \reimp
 * Parses a successful QLDB StreamJournalToKinesis \a response.
 */
void StreamJournalToKinesisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StreamJournalToKinesisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QLDB::StreamJournalToKinesisResponsePrivate
 * \brief The StreamJournalToKinesisResponsePrivate class provides private implementation for StreamJournalToKinesisResponse.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a StreamJournalToKinesisResponsePrivate object with public implementation \a q.
 */
StreamJournalToKinesisResponsePrivate::StreamJournalToKinesisResponsePrivate(
    StreamJournalToKinesisResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a QLDB StreamJournalToKinesis response element from \a xml.
 */
void StreamJournalToKinesisResponsePrivate::parseStreamJournalToKinesisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StreamJournalToKinesisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QLDB
} // namespace QtAws
