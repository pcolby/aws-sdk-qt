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

#include "updatejobpriorityresponse.h"
#include "updatejobpriorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::UpdateJobPriorityResponse
 * \brief The UpdateJobPriorityResponse class provides an interace for S3Control UpdateJobPriority responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 *
 * \sa S3ControlClient::updateJobPriority
 */

/*!
 * Constructs a UpdateJobPriorityResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateJobPriorityResponse::UpdateJobPriorityResponse(
        const UpdateJobPriorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new UpdateJobPriorityResponsePrivate(this), parent)
{
    setRequest(new UpdateJobPriorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateJobPriorityRequest * UpdateJobPriorityResponse::request() const
{
    Q_D(const UpdateJobPriorityResponse);
    return static_cast<const UpdateJobPriorityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control UpdateJobPriority \a response.
 */
void UpdateJobPriorityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateJobPriorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::UpdateJobPriorityResponsePrivate
 * \brief The UpdateJobPriorityResponsePrivate class provides private implementation for UpdateJobPriorityResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a UpdateJobPriorityResponsePrivate object with public implementation \a q.
 */
UpdateJobPriorityResponsePrivate::UpdateJobPriorityResponsePrivate(
    UpdateJobPriorityResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control UpdateJobPriority response element from \a xml.
 */
void UpdateJobPriorityResponsePrivate::parseUpdateJobPriorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobPriorityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
