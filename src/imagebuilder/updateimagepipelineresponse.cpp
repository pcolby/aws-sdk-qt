// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateimagepipelineresponse.h"
#include "updateimagepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::UpdateImagePipelineResponse
 * \brief The UpdateImagePipelineResponse class provides an interace for ImageBuilder UpdateImagePipeline responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::updateImagePipeline
 */

/*!
 * Constructs a UpdateImagePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateImagePipelineResponse::UpdateImagePipelineResponse(
        const UpdateImagePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new UpdateImagePipelineResponsePrivate(this), parent)
{
    setRequest(new UpdateImagePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateImagePipelineRequest * UpdateImagePipelineResponse::request() const
{
    Q_D(const UpdateImagePipelineResponse);
    return static_cast<const UpdateImagePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder UpdateImagePipeline \a response.
 */
void UpdateImagePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateImagePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::UpdateImagePipelineResponsePrivate
 * \brief The UpdateImagePipelineResponsePrivate class provides private implementation for UpdateImagePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a UpdateImagePipelineResponsePrivate object with public implementation \a q.
 */
UpdateImagePipelineResponsePrivate::UpdateImagePipelineResponsePrivate(
    UpdateImagePipelineResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder UpdateImagePipeline response element from \a xml.
 */
void UpdateImagePipelineResponsePrivate::parseUpdateImagePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateImagePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
