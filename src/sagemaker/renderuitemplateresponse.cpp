// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "renderuitemplateresponse.h"
#include "renderuitemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::RenderUiTemplateResponse
 * \brief The RenderUiTemplateResponse class provides an interace for SageMaker RenderUiTemplate responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::renderUiTemplate
 */

/*!
 * Constructs a RenderUiTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
RenderUiTemplateResponse::RenderUiTemplateResponse(
        const RenderUiTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new RenderUiTemplateResponsePrivate(this), parent)
{
    setRequest(new RenderUiTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RenderUiTemplateRequest * RenderUiTemplateResponse::request() const
{
    Q_D(const RenderUiTemplateResponse);
    return static_cast<const RenderUiTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker RenderUiTemplate \a response.
 */
void RenderUiTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RenderUiTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::RenderUiTemplateResponsePrivate
 * \brief The RenderUiTemplateResponsePrivate class provides private implementation for RenderUiTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a RenderUiTemplateResponsePrivate object with public implementation \a q.
 */
RenderUiTemplateResponsePrivate::RenderUiTemplateResponsePrivate(
    RenderUiTemplateResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker RenderUiTemplate response element from \a xml.
 */
void RenderUiTemplateResponsePrivate::parseRenderUiTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RenderUiTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
