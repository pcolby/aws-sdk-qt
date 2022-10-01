// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpresetresponse.h"
#include "createpresetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::CreatePresetResponse
 * \brief The CreatePresetResponse class provides an interace for ElasticTranscoder CreatePreset responses.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::createPreset
 */

/*!
 * Constructs a CreatePresetResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePresetResponse::CreatePresetResponse(
        const CreatePresetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticTranscoderResponse(new CreatePresetResponsePrivate(this), parent)
{
    setRequest(new CreatePresetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePresetRequest * CreatePresetResponse::request() const
{
    Q_D(const CreatePresetResponse);
    return static_cast<const CreatePresetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticTranscoder CreatePreset \a response.
 */
void CreatePresetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePresetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticTranscoder::CreatePresetResponsePrivate
 * \brief The CreatePresetResponsePrivate class provides private implementation for CreatePresetResponse.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a CreatePresetResponsePrivate object with public implementation \a q.
 */
CreatePresetResponsePrivate::CreatePresetResponsePrivate(
    CreatePresetResponse * const q) : ElasticTranscoderResponsePrivate(q)
{

}

/*!
 * Parses a ElasticTranscoder CreatePreset response element from \a xml.
 */
void CreatePresetResponsePrivate::parseCreatePresetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePresetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticTranscoder
} // namespace QtAws
