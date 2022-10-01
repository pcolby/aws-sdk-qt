// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateworkteamresponse.h"
#include "updateworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateWorkteamResponse
 * \brief The UpdateWorkteamResponse class provides an interace for SageMaker UpdateWorkteam responses.
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
 * \sa SageMakerClient::updateWorkteam
 */

/*!
 * Constructs a UpdateWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWorkteamResponse::UpdateWorkteamResponse(
        const UpdateWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateWorkteamResponsePrivate(this), parent)
{
    setRequest(new UpdateWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWorkteamRequest * UpdateWorkteamResponse::request() const
{
    Q_D(const UpdateWorkteamResponse);
    return static_cast<const UpdateWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker UpdateWorkteam \a response.
 */
void UpdateWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::UpdateWorkteamResponsePrivate
 * \brief The UpdateWorkteamResponsePrivate class provides private implementation for UpdateWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateWorkteamResponsePrivate object with public implementation \a q.
 */
UpdateWorkteamResponsePrivate::UpdateWorkteamResponsePrivate(
    UpdateWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker UpdateWorkteam response element from \a xml.
 */
void UpdateWorkteamResponsePrivate::parseUpdateWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
