// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTMULTIPARTUPLOADRESPONSE_H
#define QTAWS_ABORTMULTIPARTUPLOADRESPONSE_H

#include "s3response.h"
#include "abortmultipartuploadrequest.h"

namespace QtAws {
namespace S3 {

class AbortMultipartUploadResponsePrivate;

class QTAWSS3_EXPORT AbortMultipartUploadResponse : public S3Response {
    Q_OBJECT

public:
    AbortMultipartUploadResponse(const AbortMultipartUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AbortMultipartUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AbortMultipartUploadResponse)
    Q_DISABLE_COPY(AbortMultipartUploadResponse)

};

} // namespace S3
} // namespace QtAws

#endif
