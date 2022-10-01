// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBUCKETCORSRESPONSE_H
#define QTAWS_DELETEBUCKETCORSRESPONSE_H

#include "s3response.h"
#include "deletebucketcorsrequest.h"

namespace QtAws {
namespace S3 {

class DeleteBucketCorsResponsePrivate;

class QTAWSS3_EXPORT DeleteBucketCorsResponse : public S3Response {
    Q_OBJECT

public:
    DeleteBucketCorsResponse(const DeleteBucketCorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBucketCorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBucketCorsResponse)
    Q_DISABLE_COPY(DeleteBucketCorsResponse)

};

} // namespace S3
} // namespace QtAws

#endif
