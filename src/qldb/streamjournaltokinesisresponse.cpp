// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "streamjournaltokinesisresponse.h"
#include "streamjournaltokinesisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Qldb {

/*!
 * \class QtAws::Qldb::StreamJournalToKinesisResponse
 * \brief The StreamJournalToKinesisResponse class provides an interace for Qldb StreamJournalToKinesis responses.
 *
 * \inmodule QtAwsQldb
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
    Q_D(const StreamJournalToKinesisResponse);
    return static_cast<const StreamJournalToKinesisRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Qldb StreamJournalToKinesis \a response.
 */
void StreamJournalToKinesisResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StreamJournalToKinesisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Qldb::StreamJournalToKinesisResponsePrivate
 * \brief The StreamJournalToKinesisResponsePrivate class provides private implementation for StreamJournalToKinesisResponse.
 * \internal
 *
 * \inmodule QtAwsQldb
 */

/*!
 * Constructs a StreamJournalToKinesisResponsePrivate object with public implementation \a q.
 */
StreamJournalToKinesisResponsePrivate::StreamJournalToKinesisResponsePrivate(
    StreamJournalToKinesisResponse * const q) : QldbResponsePrivate(q)
{

}

/*!
 * Parses a Qldb StreamJournalToKinesis response element from \a xml.
 */
void StreamJournalToKinesisResponsePrivate::parseStreamJournalToKinesisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StreamJournalToKinesisResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Qldb
} // namespace QtAws
