// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ABORTMULTIPARTUPLOADREQUEST_H
#define QTAWS_ABORTMULTIPARTUPLOADREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class AbortMultipartUploadRequestPrivate;

class QTAWSGLACIER_EXPORT AbortMultipartUploadRequest : public GlacierRequest {

public:
    AbortMultipartUploadRequest(const AbortMultipartUploadRequest &other);
    AbortMultipartUploadRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AbortMultipartUploadRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
