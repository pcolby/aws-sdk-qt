/*
    Copyright 2013-2020 Paul Colby

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

#include "getpublicaccessblockresponse.h"
#include "getpublicaccessblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetPublicAccessBlockResponse
 * \brief The GetPublicAccessBlockResponse class provides an interace for S3Control GetPublicAccessBlock responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 *
 * \sa S3ControlClient::getPublicAccessBlock
 */

/*!
 * Constructs a GetPublicAccessBlockResponse object for \a reply to \a request, with parent \a parent.
 */
GetPublicAccessBlockResponse::GetPublicAccessBlockResponse(
        const GetPublicAccessBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetPublicAccessBlockResponsePrivate(this), parent)
{
    setRequest(new GetPublicAccessBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPublicAccessBlockRequest * GetPublicAccessBlockResponse::request() const
{
    Q_D(const GetPublicAccessBlockResponse);
    return static_cast<const GetPublicAccessBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetPublicAccessBlock \a response.
 */
void GetPublicAccessBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPublicAccessBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetPublicAccessBlockResponsePrivate
 * \brief The GetPublicAccessBlockResponsePrivate class provides private implementation for GetPublicAccessBlockResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetPublicAccessBlockResponsePrivate object with public implementation \a q.
 */
GetPublicAccessBlockResponsePrivate::GetPublicAccessBlockResponsePrivate(
    GetPublicAccessBlockResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetPublicAccessBlock response element from \a xml.
 */
void GetPublicAccessBlockResponsePrivate::parseGetPublicAccessBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicAccessBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
