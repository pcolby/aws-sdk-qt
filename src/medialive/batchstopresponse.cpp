// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchstopresponse.h"
#include "batchstopresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchStopResponse
 * \brief The BatchStopResponse class provides an interace for MediaLive BatchStop responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchStop
 */

/*!
 * Constructs a BatchStopResponse object for \a reply to \a request, with parent \a parent.
 */
BatchStopResponse::BatchStopResponse(
        const BatchStopRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new BatchStopResponsePrivate(this), parent)
{
    setRequest(new BatchStopRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchStopRequest * BatchStopResponse::request() const
{
    Q_D(const BatchStopResponse);
    return static_cast<const BatchStopRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive BatchStop \a response.
 */
void BatchStopResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchStopResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::BatchStopResponsePrivate
 * \brief The BatchStopResponsePrivate class provides private implementation for BatchStopResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchStopResponsePrivate object with public implementation \a q.
 */
BatchStopResponsePrivate::BatchStopResponsePrivate(
    BatchStopResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive BatchStop response element from \a xml.
 */
void BatchStopResponsePrivate::parseBatchStopResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchStopResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
