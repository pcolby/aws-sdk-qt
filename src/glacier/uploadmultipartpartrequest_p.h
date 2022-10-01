// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADMULTIPARTPARTREQUEST_P_H
#define QTAWS_UPLOADMULTIPARTPARTREQUEST_P_H

#include "glacierrequest_p.h"
#include "uploadmultipartpartrequest.h"

namespace QtAws {
namespace Glacier {

class UploadMultipartPartRequest;

class UploadMultipartPartRequestPrivate : public GlacierRequestPrivate {

public:
    UploadMultipartPartRequestPrivate(const GlacierRequest::Action action,
                                   UploadMultipartPartRequest * const q);
    UploadMultipartPartRequestPrivate(const UploadMultipartPartRequestPrivate &other,
                                   UploadMultipartPartRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadMultipartPartRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
