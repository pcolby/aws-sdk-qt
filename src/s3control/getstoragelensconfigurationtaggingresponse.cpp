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

#include "getstoragelensconfigurationtaggingresponse.h"
#include "getstoragelensconfigurationtaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationTaggingResponse
 * \brief The GetStorageLensConfigurationTaggingResponse class provides an interace for S3Control GetStorageLensConfigurationTagging responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getStorageLensConfigurationTagging
 */

/*!
 * Constructs a GetStorageLensConfigurationTaggingResponse object for \a reply to \a request, with parent \a parent.
 */
GetStorageLensConfigurationTaggingResponse::GetStorageLensConfigurationTaggingResponse(
        const GetStorageLensConfigurationTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetStorageLensConfigurationTaggingResponsePrivate(this), parent)
{
    setRequest(new GetStorageLensConfigurationTaggingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStorageLensConfigurationTaggingRequest * GetStorageLensConfigurationTaggingResponse::request() const
{
    return static_cast<const GetStorageLensConfigurationTaggingRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control GetStorageLensConfigurationTagging \a response.
 */
void GetStorageLensConfigurationTaggingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStorageLensConfigurationTaggingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationTaggingResponsePrivate
 * \brief The GetStorageLensConfigurationTaggingResponsePrivate class provides private implementation for GetStorageLensConfigurationTaggingResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetStorageLensConfigurationTaggingResponsePrivate object with public implementation \a q.
 */
GetStorageLensConfigurationTaggingResponsePrivate::GetStorageLensConfigurationTaggingResponsePrivate(
    GetStorageLensConfigurationTaggingResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetStorageLensConfigurationTagging response element from \a xml.
 */
void GetStorageLensConfigurationTaggingResponsePrivate::parseGetStorageLensConfigurationTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStorageLensConfigurationTaggingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
