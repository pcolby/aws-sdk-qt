// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "readpresetresponse.h"
#include "readpresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::ReadPresetResponse
 * \brief The ReadPresetResponse class provides an interace for ElasticTranscoder ReadPreset responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::readPreset
 */

/*!
 * Constructs a ReadPresetResponse object for \a reply to \a request, with parent \a parent.
 */
ReadPresetResponse::ReadPresetResponse(
        const ReadPresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new ReadPresetResponsePrivate(this), parent)
{
    setRequest(new ReadPresetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ReadPresetRequest * ReadPresetResponse::request() const
{
    Q_D(const ReadPresetResponse);
    return static_cast<const ReadPresetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder ReadPreset \a response.
 */
void ReadPresetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ReadPresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::ReadPresetResponsePrivate
 * \brief The ReadPresetResponsePrivate class provides private implementation for ReadPresetResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a ReadPresetResponsePrivate object with public implementation \a q.
 */
ReadPresetResponsePrivate::ReadPresetResponsePrivate(
    ReadPresetResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder ReadPreset response element from \a xml.
 */
void ReadPresetResponsePrivate::parseReadPresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ReadPresetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
