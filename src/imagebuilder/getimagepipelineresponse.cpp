// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
