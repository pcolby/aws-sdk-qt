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
