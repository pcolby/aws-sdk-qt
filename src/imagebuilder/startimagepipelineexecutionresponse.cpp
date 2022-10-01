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

#include "startimagepipelineexecutionresponse.h"
#include "startimagepipelineexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::StartImagePipelineExecutionResponse
 * \brief The StartImagePipelineExecutionResponse class provides an interace for ImageBuilder StartImagePipelineExecution responses.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::startImagePipelineExecution
 */

/*!
 * Constructs a StartImagePipelineExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StartImagePipelineExecutionResponse::StartImagePipelineExecutionResponse(
        const StartImagePipelineExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImageBuilderResponse(new StartImagePipelineExecutionResponsePrivate(this), parent)
{
    setRequest(new StartImagePipelineExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImagePipelineExecutionRequest * StartImagePipelineExecutionResponse::request() const
{
    Q_D(const StartImagePipelineExecutionResponse);
    return static_cast<const StartImagePipelineExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ImageBuilder StartImagePipelineExecution \a response.
 */
void StartImagePipelineExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImagePipelineExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ImageBuilder::StartImagePipelineExecutionResponsePrivate
 * \brief The StartImagePipelineExecutionResponsePrivate class provides private implementation for StartImagePipelineExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a StartImagePipelineExecutionResponsePrivate object with public implementation \a q.
 */
StartImagePipelineExecutionResponsePrivate::StartImagePipelineExecutionResponsePrivate(
    StartImagePipelineExecutionResponse * const q) : ImageBuilderResponsePrivate(q)
{

}

/*!
 * Parses a ImageBuilder StartImagePipelineExecution response element from \a xml.
 */
void StartImagePipelineExecutionResponsePrivate::parseStartImagePipelineExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImagePipelineExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ImageBuilder
} // namespace QtAws
