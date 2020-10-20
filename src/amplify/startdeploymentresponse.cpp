/*
    Copyright 2013-2020 Paul Colby

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

#include "startdeploymentresponse.h"
#include "startdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StartDeploymentResponse
 * \brief The StartDeploymentResponse class provides an interace for Amplify StartDeployment responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::startDeployment
 */

/*!
 * Constructs a StartDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
StartDeploymentResponse::StartDeploymentResponse(
        const StartDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new StartDeploymentResponsePrivate(this), parent)
{
    setRequest(new StartDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDeploymentRequest * StartDeploymentResponse::request() const
{
    Q_D(const StartDeploymentResponse);
    return static_cast<const StartDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify StartDeployment \a response.
 */
void StartDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::StartDeploymentResponsePrivate
 * \brief The StartDeploymentResponsePrivate class provides private implementation for StartDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StartDeploymentResponsePrivate object with public implementation \a q.
 */
StartDeploymentResponsePrivate::StartDeploymentResponsePrivate(
    StartDeploymentResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify StartDeployment response element from \a xml.
 */
void StartDeploymentResponsePrivate::parseStartDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
