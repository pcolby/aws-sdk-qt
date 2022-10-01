// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUPLOADREQUEST_P_H
#define QTAWS_DELETEUPLOADREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deleteuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteUploadRequest;

class DeleteUploadRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteUploadRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteUploadRequest * const q);
    DeleteUploadRequestPrivate(const DeleteUploadRequestPrivate &other,
                                   DeleteUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
