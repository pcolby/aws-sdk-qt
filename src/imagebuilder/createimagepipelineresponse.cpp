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
