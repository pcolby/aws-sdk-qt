// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIPARTUPLOADRESPONSE_H
#define QTAWS_CREATEMULTIPARTUPLOADRESPONSE_H

#include "s3response.h"
#include "createmultipartuploadrequest.h"

namespace QtAws {
namespace S3 {

class CreateMultipartUploadResponsePrivate;

class QTAWSS3_EXPORT CreateMultipartUploadResponse : public S3Response {
    Q_OBJECT

public:
    CreateMultipartUploadResponse(const CreateMultipartUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMultipartUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultipartUploadResponse)
    Q_DISABLE_COPY(CreateMultipartUploadResponse)

};

} // namespace S3
} // namespace QtAws

#endif
