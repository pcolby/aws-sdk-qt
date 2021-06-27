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

#include "updatebackendjobresponse.h"
#include "updatebackendjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobResponse
 * \brief The UpdateBackendJobResponse class provides an interace for AmplifyBackend UpdateBackendJob responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendJob
 */

/*!
 * Constructs a UpdateBackendJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendJobResponse::UpdateBackendJobResponse(
        const UpdateBackendJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendJobResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendJobRequest * UpdateBackendJobResponse::request() const
{
    return static_cast<const UpdateBackendJobRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendJob \a response.
 */
void UpdateBackendJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobResponsePrivate
 * \brief The UpdateBackendJobResponsePrivate class provides private implementation for UpdateBackendJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendJobResponsePrivate object with public implementation \a q.
 */
UpdateBackendJobResponsePrivate::UpdateBackendJobResponsePrivate(
    UpdateBackendJobResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendJob response element from \a xml.
 */
void UpdateBackendJobResponsePrivate::parseUpdateBackendJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
