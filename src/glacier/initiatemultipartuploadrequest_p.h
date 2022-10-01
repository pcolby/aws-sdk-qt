// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEMULTIPARTUPLOADREQUEST_P_H
#define QTAWS_INITIATEMULTIPARTUPLOADREQUEST_P_H

#include "glacierrequest_p.h"
#include "initiatemultipartuploadrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateMultipartUploadRequest;

class InitiateMultipartUploadRequestPrivate : public GlacierRequestPrivate {

public:
    InitiateMultipartUploadRequestPrivate(const GlacierRequest::Action action,
                                   InitiateMultipartUploadRequest * const q);
    InitiateMultipartUploadRequestPrivate(const InitiateMultipartUploadRequestPrivate &other,
                                   InitiateMultipartUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitiateMultipartUploadRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
