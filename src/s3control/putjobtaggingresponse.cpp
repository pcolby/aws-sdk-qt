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

#include "putjobtaggingresponse.h"
#include "putjobtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutJobTaggingResponse
 * \brief The PutJobTaggingResponse class provides an interace for S3Control PutJobTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putJobTagging
 */

/*!
 * Constructs a PutJobTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
PutJobTaggingResponse::PutJobTaggingResponse(
        const PutJobTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutJobTaggingResponsePrivate(this), parent)
{
    setRequest(new PutJobTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutJobTaggingRequest * PutJobTaggingResponse::request() const
{
    return static_cast<const PutJobTaggingRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control PutJobTagging \a response.
 */
void PutJobTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutJobTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutJobTaggingResponsePrivate
 * \brief The PutJobTaggingResponsePrivate class provides private implementation for PutJobTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutJobTaggingResponsePrivate object with public implementation \a q.
 */
PutJobTaggingResponsePrivate::PutJobTaggingResponsePrivate(
    PutJobTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutJobTagging response element from \a xml.
 */
void PutJobTaggingResponsePrivate::parsePutJobTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutJobTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
