// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_HEADBUCKETRESPONSE_H
#define QTAWS_HEADBUCKETRESPONSE_H

#include "s3response.h"
#include "headbucketrequest.h"

namespace QtAws {
namespace S3 {

class HeadBucketResponsePrivate;

class QTAWSS3_EXPORT HeadBucketResponse : public S3Response {
    Q_OBJECT

public:
    HeadBucketResponse(const HeadBucketRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const HeadBucketRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(HeadBucketResponse)
    Q_DISABLE_COPY(HeadBucketResponse)

};

} // namespace S3
} // namespace QtAws

#endif
