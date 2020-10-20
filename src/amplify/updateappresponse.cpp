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

#include "updateappresponse.h"
#include "updateappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::UpdateAppResponse
 * \brief The UpdateAppResponse class provides an interace for Amplify UpdateApp responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::updateApp
 */

/*!
 * Constructs a UpdateAppResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppResponse::UpdateAppResponse(
        const UpdateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new UpdateAppResponsePrivate(this), parent)
{
    setRequest(new UpdateAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppRequest * UpdateAppResponse::request() const
{
    Q_D(const UpdateAppResponse);
    return static_cast<const UpdateAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify UpdateApp \a response.
 */
void UpdateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::UpdateAppResponsePrivate
 * \brief The UpdateAppResponsePrivate class provides private implementation for UpdateAppResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a UpdateAppResponsePrivate object with public implementation \a q.
 */
UpdateAppResponsePrivate::UpdateAppResponsePrivate(
    UpdateAppResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify UpdateApp response element from \a xml.
 */
void UpdateAppResponsePrivate::parseUpdateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
