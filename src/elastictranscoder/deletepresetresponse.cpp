// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepresetresponse.h"
#include "deletepresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::DeletePresetResponse
 * \brief The DeletePresetResponse class provides an interace for ElasticTranscoder DeletePreset responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::deletePreset
 */

/*!
 * Constructs a DeletePresetResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePresetResponse::DeletePresetResponse(
        const DeletePresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new DeletePresetResponsePrivate(this), parent)
{
    setRequest(new DeletePresetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePresetRequest * DeletePresetResponse::request() const
{
    Q_D(const DeletePresetResponse);
    return static_cast<const DeletePresetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder DeletePreset \a response.
 */
void DeletePresetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::DeletePresetResponsePrivate
 * \brief The DeletePresetResponsePrivate class provides private implementation for DeletePresetResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a DeletePresetResponsePrivate object with public implementation \a q.
 */
DeletePresetResponsePrivate::DeletePresetResponsePrivate(
    DeletePresetResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder DeletePreset response element from \a xml.
 */
void DeletePresetResponsePrivate::parseDeletePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePresetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
