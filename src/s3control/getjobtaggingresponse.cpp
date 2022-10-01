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
