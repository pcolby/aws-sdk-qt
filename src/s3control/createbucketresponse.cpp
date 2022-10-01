// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbucketresponse.h"
#include "createbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateBucketResponse
 * \brief The CreateBucketResponse class provides an interace for S3Control CreateBucket responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createBucket
 */

/*!
 * Constructs a CreateBucketResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBucketResponse::CreateBucketResponse(
        const CreateBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new CreateBucketResponsePrivate(this), parent)
{
    setRequest(new CreateBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBucketRequest * CreateBucketResponse::request() const
{
    Q_D(const CreateBucketResponse);
    return static_cast<const CreateBucketRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control CreateBucket \a response.
 */
void CreateBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::CreateBucketResponsePrivate
 * \brief The CreateBucketResponsePrivate class provides private implementation for CreateBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateBucketResponsePrivate object with public implementation \a q.
 */
CreateBucketResponsePrivate::CreateBucketResponsePrivate(
    CreateBucketResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control CreateBucket response element from \a xml.
 */
void CreateBucketResponsePrivate::parseCreateBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
