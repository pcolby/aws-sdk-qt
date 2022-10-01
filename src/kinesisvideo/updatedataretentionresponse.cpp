// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedataretentionresponse.h"
#include "updatedataretentionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateDataRetentionResponse
 * \brief The UpdateDataRetentionResponse class provides an interace for KinesisVideo UpdateDataRetention responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateDataRetention
 */

/*!
 * Constructs a UpdateDataRetentionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDataRetentionResponse::UpdateDataRetentionResponse(
        const UpdateDataRetentionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UpdateDataRetentionResponsePrivate(this), parent)
{
    setRequest(new UpdateDataRetentionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDataRetentionRequest * UpdateDataRetentionResponse::request() const
{
    Q_D(const UpdateDataRetentionResponse);
    return static_cast<const UpdateDataRetentionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UpdateDataRetention \a response.
 */
void UpdateDataRetentionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDataRetentionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UpdateDataRetentionResponsePrivate
 * \brief The UpdateDataRetentionResponsePrivate class provides private implementation for UpdateDataRetentionResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateDataRetentionResponsePrivate object with public implementation \a q.
 */
UpdateDataRetentionResponsePrivate::UpdateDataRetentionResponsePrivate(
    UpdateDataRetentionResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UpdateDataRetention response element from \a xml.
 */
void UpdateDataRetentionResponsePrivate::parseUpdateDataRetentionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDataRetentionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
