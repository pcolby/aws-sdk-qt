// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEMULTIPARTUPLOADREQUEST_P_H
#define QTAWS_COMPLETEMULTIPARTUPLOADREQUEST_P_H

#include "glacierrequest_p.h"
#include "completemultipartuploadrequest.h"

namespace QtAws {
namespace Glacier {

class CompleteMultipartUploadRequest;

class CompleteMultipartUploadRequestPrivate : public GlacierRequestPrivate {

public:
    CompleteMultipartUploadRequestPrivate(const GlacierRequest::Action action,
                                   CompleteMultipartUploadRequest * const q);
    CompleteMultipartUploadRequestPrivate(const CompleteMultipartUploadRequestPrivate &other,
                                   CompleteMultipartUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CompleteMultipartUploadRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
