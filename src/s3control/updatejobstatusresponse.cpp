// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
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
