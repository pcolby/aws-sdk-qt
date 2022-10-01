// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
