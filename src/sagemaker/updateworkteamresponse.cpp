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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
