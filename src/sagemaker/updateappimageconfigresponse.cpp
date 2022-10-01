// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappimageconfigresponse.h"
#include "updateappimageconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigResponse
 * \brief The UpdateAppImageConfigResponse class provides an interace for SageMaker UpdateAppImageConfig responses.
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
 * \sa SageMakerClient::updateAppImageConfig
 */

/*!
 * Constructs a UpdateAppImageConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppImageConfigResponse::UpdateAppImageConfigResponse(
        const UpdateAppImageConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateAppImageConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateAppImageConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppImageConfigRequest * UpdateAppImageConfigResponse::request() const
{
    Q_D(const UpdateAppImageConfigResponse);
    return static_cast<const UpdateAppImageConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateAppImageConfig \a response.
 */
void UpdateAppImageConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppImageConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateAppImageConfigResponsePrivate
 * \brief The UpdateAppImageConfigResponsePrivate class provides private implementation for UpdateAppImageConfigResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateAppImageConfigResponsePrivate object with public implementation \a q.
 */
UpdateAppImageConfigResponsePrivate::UpdateAppImageConfigResponsePrivate(
    UpdateAppImageConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateAppImageConfig response element from \a xml.
 */
void UpdateAppImageConfigResponsePrivate::parseUpdateAppImageConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppImageConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
