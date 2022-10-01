// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADPARTRESPONSE_H
#define QTAWS_UPLOADPARTRESPONSE_H

#include "s3response.h"
#include "uploadpartrequest.h"

namespace QtAws {
namespace S3 {

class UploadPartResponsePrivate;

class QTAWSS3_EXPORT UploadPartResponse : public S3Response {
    Q_OBJECT

public:
    UploadPartResponse(const UploadPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadPartRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadPartResponse)
    Q_DISABLE_COPY(UploadPartResponse)

};

} // namespace S3
} // namespace QtAws

#endif
