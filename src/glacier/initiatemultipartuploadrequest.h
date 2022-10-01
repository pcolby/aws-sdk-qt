// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEMULTIPARTUPLOADREQUEST_H
#define QTAWS_INITIATEMULTIPARTUPLOADREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateMultipartUploadRequestPrivate;

class QTAWSGLACIER_EXPORT InitiateMultipartUploadRequest : public GlacierRequest {

public:
    InitiateMultipartUploadRequest(const InitiateMultipartUploadRequest &other);
    InitiateMultipartUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateMultipartUploadRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
