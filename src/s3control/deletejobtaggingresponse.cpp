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
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
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
    return static_cast<const DeleteJobTaggingRequest *>(S3ControlResponse::request());
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
