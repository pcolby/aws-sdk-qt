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

#include "updatejobstatusresponse.h"
#include "updatejobstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::UpdateJobStatusResponse
 * \brief The UpdateJobStatusResponse class provides an interace for S3Control UpdateJobStatus responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 *
 * \sa S3ControlClient::updateJobStatus
 */

/*!
 * Constructs a UpdateJobStatusResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobStatusResponse::UpdateJobStatusResponse(
        const UpdateJobStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new UpdateJobStatusResponsePrivate(this), parent)
{
    setRequest(new UpdateJobStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobStatusRequest * UpdateJobStatusResponse::request() const
{
    Q_D(const UpdateJobStatusResponse);
    return static_cast<const UpdateJobStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control UpdateJobStatus \a response.
 */
void UpdateJobStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJobStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::UpdateJobStatusResponsePrivate
 * \brief The UpdateJobStatusResponsePrivate class provides private implementation for UpdateJobStatusResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a UpdateJobStatusResponsePrivate object with public implementation \a q.
 */
UpdateJobStatusResponsePrivate::UpdateJobStatusResponsePrivate(
    UpdateJobStatusResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control UpdateJobStatus response element from \a xml.
 */
void UpdateJobStatusResponsePrivate::parseUpdateJobStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
