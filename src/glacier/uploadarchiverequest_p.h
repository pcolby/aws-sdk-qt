// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADARCHIVEREQUEST_P_H
#define QTAWS_UPLOADARCHIVEREQUEST_P_H

#include "glacierrequest_p.h"
#include "uploadarchiverequest.h"

namespace QtAws {
namespace Glacier {

class UploadArchiveRequest;

class UploadArchiveRequestPrivate : public GlacierRequestPrivate {

public:
    UploadArchiveRequestPrivate(const GlacierRequest::Action action,
                                   UploadArchiveRequest * const q);
    UploadArchiveRequestPrivate(const UploadArchiveRequestPrivate &other,
                                   UploadArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadArchiveRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
