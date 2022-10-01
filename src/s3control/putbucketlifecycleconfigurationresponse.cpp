// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbucketlifecycleconfigurationresponse.h"
#include "putbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutBucketLifecycleConfigurationResponse
 * \brief The PutBucketLifecycleConfigurationResponse class provides an interace for S3Control PutBucketLifecycleConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putBucketLifecycleConfiguration
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutBucketLifecycleConfigurationResponse::PutBucketLifecycleConfigurationResponse(
        const PutBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBucketLifecycleConfigurationRequest * PutBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const PutBucketLifecycleConfigurationResponse);
    return static_cast<const PutBucketLifecycleConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutBucketLifecycleConfiguration \a response.
 */
void PutBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutBucketLifecycleConfigurationResponsePrivate
 * \brief The PutBucketLifecycleConfigurationResponsePrivate class provides private implementation for PutBucketLifecycleConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutBucketLifecycleConfigurationResponsePrivate object with public implementation \a q.
 */
PutBucketLifecycleConfigurationResponsePrivate::PutBucketLifecycleConfigurationResponsePrivate(
    PutBucketLifecycleConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutBucketLifecycleConfiguration response element from \a xml.
 */
void PutBucketLifecycleConfigurationResponsePrivate::parsePutBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLifecycleConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
