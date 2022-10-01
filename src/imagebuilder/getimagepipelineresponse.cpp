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

#include "getimagepipelineresponse.h"
#include "getimagepipelineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetImagePipelineResponse
 * \brief The GetImagePipelineResponse class provides an interace for ImageBuilder GetImagePipeline responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getImagePipeline
 */

/*!
 * Constructs a GetImagePipelineResponse object for \a reply to \a request, with parent \a parent.
 */
GetImagePipelineResponse::GetImagePipelineResponse(
        const GetImagePipelineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new GetImagePipelineResponsePrivate(this), parent)
{
    setRequest(new GetImagePipelineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImagePipelineRequest * GetImagePipelineResponse::request() const
{
    Q_D(const GetImagePipelineResponse);
    return static_cast<const GetImagePipelineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder GetImagePipeline \a response.
 */
void GetImagePipelineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImagePipelineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::GetImagePipelineResponsePrivate
 * \brief The GetImagePipelineResponsePrivate class provides private implementation for GetImagePipelineResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetImagePipelineResponsePrivate object with public implementation \a q.
 */
GetImagePipelineResponsePrivate::GetImagePipelineResponsePrivate(
    GetImagePipelineResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder GetImagePipeline response element from \a xml.
 */
void GetImagePipelineResponsePrivate::parseGetImagePipelineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImagePipelineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
