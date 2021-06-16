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

#include "getstoragelensconfigurationresponse.h"
#include "getstoragelensconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationResponse
 * \brief The GetStorageLensConfigurationResponse class provides an interace for S3Control GetStorageLensConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getStorageLensConfiguration
 */

/*!
 * Constructs a GetStorageLensConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetStorageLensConfigurationResponse::GetStorageLensConfigurationResponse(
        const GetStorageLensConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetStorageLensConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetStorageLensConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetStorageLensConfigurationRequest * GetStorageLensConfigurationResponse::request() const
{
    Q_D(const GetStorageLensConfigurationResponse);
    return static_cast<const GetStorageLensConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetStorageLensConfiguration \a response.
 */
void GetStorageLensConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetStorageLensConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetStorageLensConfigurationResponsePrivate
 * \brief The GetStorageLensConfigurationResponsePrivate class provides private implementation for GetStorageLensConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetStorageLensConfigurationResponsePrivate object with public implementation \a q.
 */
GetStorageLensConfigurationResponsePrivate::GetStorageLensConfigurationResponsePrivate(
    GetStorageLensConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetStorageLensConfiguration response element from \a xml.
 */
void GetStorageLensConfigurationResponsePrivate::parseGetStorageLensConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStorageLensConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
