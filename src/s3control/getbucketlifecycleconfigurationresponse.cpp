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

#include "getbucketlifecycleconfigurationresponse.h"
#include "getbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetBucketLifecycleConfigurationResponse
 * \brief The GetBucketLifecycleConfigurationResponse class provides an interace for S3Control GetBucketLifecycleConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getBucketLifecycleConfiguration
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetBucketLifecycleConfigurationResponse::GetBucketLifecycleConfigurationResponse(
        const GetBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBucketLifecycleConfigurationRequest * GetBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const GetBucketLifecycleConfigurationResponse);
    return static_cast<const GetBucketLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetBucketLifecycleConfiguration \a response.
 */
void GetBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetBucketLifecycleConfigurationResponsePrivate
 * \brief The GetBucketLifecycleConfigurationResponsePrivate class provides private implementation for GetBucketLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetBucketLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
GetBucketLifecycleConfigurationResponsePrivate::GetBucketLifecycleConfigurationResponsePrivate(
    GetBucketLifecycleConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetBucketLifecycleConfiguration response element from \a xml.
 */
void GetBucketLifecycleConfigurationResponsePrivate::parseGetBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
