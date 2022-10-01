// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
