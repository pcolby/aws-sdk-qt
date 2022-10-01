// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEMULTIPARTUPLOADRESPONSE_H
#define QTAWS_INITIATEMULTIPARTUPLOADRESPONSE_H

#include "glacierresponse.h"
#include "initiatemultipartuploadrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateMultipartUploadResponsePrivate;

class QTAWSGLACIER_EXPORT InitiateMultipartUploadResponse : public GlacierResponse {
    Q_OBJECT

public:
    InitiateMultipartUploadResponse(const InitiateMultipartUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitiateMultipartUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateMultipartUploadResponse)
    Q_DISABLE_COPY(InitiateMultipartUploadResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
