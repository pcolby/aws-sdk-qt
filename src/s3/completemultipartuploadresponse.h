// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMULTIPARTUPLOADRESPONSE_H
#define QTAWS_COMPLETEMULTIPARTUPLOADRESPONSE_H

#include "s3response.h"
#include "completemultipartuploadrequest.h"

namespace QtAws {
namespace S3 {

class CompleteMultipartUploadResponsePrivate;

class QTAWSS3_EXPORT CompleteMultipartUploadResponse : public S3Response {
    Q_OBJECT

public:
    CompleteMultipartUploadResponse(const CompleteMultipartUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompleteMultipartUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteMultipartUploadResponse)
    Q_DISABLE_COPY(CompleteMultipartUploadResponse)

};

} // namespace S3
} // namespace QtAws

#endif
