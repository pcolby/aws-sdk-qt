// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
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
