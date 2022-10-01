// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobtaggingresponse.h"
#include "getjobtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetJobTaggingResponse
 * \brief The GetJobTaggingResponse class provides an interace for S3Control GetJobTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getJobTagging
 */

/*!
 * Constructs a GetJobTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobTaggingResponse::GetJobTaggingResponse(
        const GetJobTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetJobTaggingResponsePrivate(this), parent)
{
    setRequest(new GetJobTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobTaggingRequest * GetJobTaggingResponse::request() const
{
    Q_D(const GetJobTaggingResponse);
    return static_cast<const GetJobTaggingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetJobTagging \a response.
 */
void GetJobTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetJobTaggingResponsePrivate
 * \brief The GetJobTaggingResponsePrivate class provides private implementation for GetJobTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetJobTaggingResponsePrivate object with public implementation \a q.
 */
GetJobTaggingResponsePrivate::GetJobTaggingResponsePrivate(
    GetJobTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetJobTagging response element from \a xml.
 */
void GetJobTaggingResponsePrivate::parseGetJobTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
