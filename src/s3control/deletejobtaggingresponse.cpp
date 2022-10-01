// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletejobtaggingresponse.h"
#include "deletejobtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteJobTaggingResponse
 * \brief The DeleteJobTaggingResponse class provides an interace for S3Control DeleteJobTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteJobTagging
 */

/*!
 * Constructs a DeleteJobTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteJobTaggingResponse::DeleteJobTaggingResponse(
        const DeleteJobTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteJobTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteJobTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteJobTaggingRequest * DeleteJobTaggingResponse::request() const
{
    Q_D(const DeleteJobTaggingResponse);
    return static_cast<const DeleteJobTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteJobTagging \a response.
 */
void DeleteJobTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteJobTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteJobTaggingResponsePrivate
 * \brief The DeleteJobTaggingResponsePrivate class provides private implementation for DeleteJobTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteJobTaggingResponsePrivate object with public implementation \a q.
 */
DeleteJobTaggingResponsePrivate::DeleteJobTaggingResponsePrivate(
    DeleteJobTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteJobTagging response element from \a xml.
 */
void DeleteJobTaggingResponsePrivate::parseDeleteJobTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
