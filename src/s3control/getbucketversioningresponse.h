// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETVERSIONINGRESPONSE_H
#define QTAWS_GETBUCKETVERSIONINGRESPONSE_H

#include "s3controlresponse.h"
#include "getbucketversioningrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketVersioningResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetBucketVersioningResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetBucketVersioningResponse(const GetBucketVersioningRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketVersioningRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketVersioningResponse)
    Q_DISABLE_COPY(GetBucketVersioningResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
