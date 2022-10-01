// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETRESPONSE_H
#define QTAWS_GETBUCKETRESPONSE_H

#include "s3controlresponse.h"
#include "getbucketrequest.h"

namespace QtAws {
namespace S3Control {

class GetBucketResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetBucketResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetBucketResponse(const GetBucketRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketResponse)
    Q_DISABLE_COPY(GetBucketResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
