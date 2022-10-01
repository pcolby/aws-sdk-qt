// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEARCHIVEREQUEST_P_H
#define QTAWS_DELETEARCHIVEREQUEST_P_H

#include "glacierrequest_p.h"
#include "deletearchiverequest.h"

namespace QtAws {
namespace Glacier {

class DeleteArchiveRequest;

class DeleteArchiveRequestPrivate : public GlacierRequestPrivate {

public:
    DeleteArchiveRequestPrivate(const GlacierRequest::Action action,
                                   DeleteArchiveRequest * const q);
    DeleteArchiveRequestPrivate(const DeleteArchiveRequestPrivate &other,
                                   DeleteArchiveRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteArchiveRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
