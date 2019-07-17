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

#include "startjobresponse.h"
#include "startjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StartJobResponse
 * \brief The StartJobResponse class provides an interace for Amplify StartJob responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::startJob
 */

/*!
 * Constructs a StartJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartJobResponse::StartJobResponse(
        const StartJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new StartJobResponsePrivate(this), parent)
{
    setRequest(new StartJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartJobRequest * StartJobResponse::request() const
{
    Q_D(const StartJobResponse);
    return static_cast<const StartJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify StartJob \a response.
 */
void StartJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::StartJobResponsePrivate
 * \brief The StartJobResponsePrivate class provides private implementation for StartJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StartJobResponsePrivate object with public implementation \a q.
 */
StartJobResponsePrivate::StartJobResponsePrivate(
    StartJobResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify StartJob response element from \a xml.
 */
void StartJobResponsePrivate::parseStartJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
