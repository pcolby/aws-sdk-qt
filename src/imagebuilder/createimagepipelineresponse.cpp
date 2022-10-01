// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createimagepipelineresponse.h"
#include "createimagepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::CreateImagePipelineResponse
 * \brief The CreateImagePipelineResponse class provides an interace for ImageBuilder CreateImagePipeline responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::createImagePipeline
 */

/*!
 * Constructs a CreateImagePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
CreateImagePipelineResponse::CreateImagePipelineResponse(
        const CreateImagePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new CreateImagePipelineResponsePrivate(this), parent)
{
    setRequest(new CreateImagePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateImagePipelineRequest * CreateImagePipelineResponse::request() const
{
    Q_D(const CreateImagePipelineResponse);
    return static_cast<const CreateImagePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder CreateImagePipeline \a response.
 */
void CreateImagePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateImagePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::CreateImagePipelineResponsePrivate
 * \brief The CreateImagePipelineResponsePrivate class provides private implementation for CreateImagePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a CreateImagePipelineResponsePrivate object with public implementation \a q.
 */
CreateImagePipelineResponsePrivate::CreateImagePipelineResponsePrivate(
    CreateImagePipelineResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder CreateImagePipeline response element from \a xml.
 */
void CreateImagePipelineResponsePrivate::parseCreateImagePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImagePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
