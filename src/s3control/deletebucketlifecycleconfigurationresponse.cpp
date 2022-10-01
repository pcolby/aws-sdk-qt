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

#include "deletebucketlifecycleconfigurationresponse.h"
#include "deletebucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteBucketLifecycleConfigurationResponse
 * \brief The DeleteBucketLifecycleConfigurationResponse class provides an interace for S3Control DeleteBucketLifecycleConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteBucketLifecycleConfiguration
 */

/*!
 * Constructs a DeleteBucketLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBucketLifecycleConfigurationResponse::DeleteBucketLifecycleConfigurationResponse(
        const DeleteBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBucketLifecycleConfigurationRequest * DeleteBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const DeleteBucketLifecycleConfigurationResponse);
    return static_cast<const DeleteBucketLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteBucketLifecycleConfiguration \a response.
 */
void DeleteBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteBucketLifecycleConfigurationResponsePrivate
 * \brief The DeleteBucketLifecycleConfigurationResponsePrivate class provides private implementation for DeleteBucketLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteBucketLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteBucketLifecycleConfigurationResponsePrivate::DeleteBucketLifecycleConfigurationResponsePrivate(
    DeleteBucketLifecycleConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteBucketLifecycleConfiguration response element from \a xml.
 */
void DeleteBucketLifecycleConfigurationResponsePrivate::parseDeleteBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
