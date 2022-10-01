// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeleteresponse.h"
#include "batchdeleteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchDeleteResponse
 * \brief The BatchDeleteResponse class provides an interace for MediaLive BatchDelete responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchDelete
 */

/*!
 * Constructs a BatchDeleteResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteResponse::BatchDeleteResponse(
        const BatchDeleteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new BatchDeleteResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteRequest * BatchDeleteResponse::request() const
{
    Q_D(const BatchDeleteResponse);
    return static_cast<const BatchDeleteRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive BatchDelete \a response.
 */
void BatchDeleteResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::BatchDeleteResponsePrivate
 * \brief The BatchDeleteResponsePrivate class provides private implementation for BatchDeleteResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchDeleteResponsePrivate object with public implementation \a q.
 */
BatchDeleteResponsePrivate::BatchDeleteResponsePrivate(
    BatchDeleteResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive BatchDelete response element from \a xml.
 */
void BatchDeleteResponsePrivate::parseBatchDeleteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
