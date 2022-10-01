// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecontextresponse.h"
#include "updatecontextresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateContextResponse
 * \brief The UpdateContextResponse class provides an interace for SageMaker UpdateContext responses.
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
 * \sa SageMakerClient::updateContext
 */

/*!
 * Constructs a UpdateContextResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateContextResponse::UpdateContextResponse(
        const UpdateContextRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateContextResponsePrivate(this), parent)
{
    setRequest(new UpdateContextRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateContextRequest * UpdateContextResponse::request() const
{
    Q_D(const UpdateContextResponse);
    return static_cast<const UpdateContextRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateContext \a response.
 */
void UpdateContextResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateContextResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateContextResponsePrivate
 * \brief The UpdateContextResponsePrivate class provides private implementation for UpdateContextResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateContextResponsePrivate object with public implementation \a q.
 */
UpdateContextResponsePrivate::UpdateContextResponsePrivate(
    UpdateContextResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateContext response element from \a xml.
 */
void UpdateContextResponsePrivate::parseUpdateContextResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContextResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
