// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateimagegenerationconfigurationresponse.h"
#include "updateimagegenerationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::UpdateImageGenerationConfigurationResponse
 * \brief The UpdateImageGenerationConfigurationResponse class provides an interace for KinesisVideo UpdateImageGenerationConfiguration responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::updateImageGenerationConfiguration
 */

/*!
 * Constructs a UpdateImageGenerationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateImageGenerationConfigurationResponse::UpdateImageGenerationConfigurationResponse(
        const UpdateImageGenerationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new UpdateImageGenerationConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateImageGenerationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateImageGenerationConfigurationRequest * UpdateImageGenerationConfigurationResponse::request() const
{
    Q_D(const UpdateImageGenerationConfigurationResponse);
    return static_cast<const UpdateImageGenerationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo UpdateImageGenerationConfiguration \a response.
 */
void UpdateImageGenerationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateImageGenerationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::UpdateImageGenerationConfigurationResponsePrivate
 * \brief The UpdateImageGenerationConfigurationResponsePrivate class provides private implementation for UpdateImageGenerationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a UpdateImageGenerationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateImageGenerationConfigurationResponsePrivate::UpdateImageGenerationConfigurationResponsePrivate(
    UpdateImageGenerationConfigurationResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo UpdateImageGenerationConfiguration response element from \a xml.
 */
void UpdateImageGenerationConfigurationResponsePrivate::parseUpdateImageGenerationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateImageGenerationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
