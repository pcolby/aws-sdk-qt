/*
    Copyright 2013-2019 Paul Colby

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
