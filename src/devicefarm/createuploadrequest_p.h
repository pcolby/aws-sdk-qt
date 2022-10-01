// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADREQUEST_P_H
#define QTAWS_CREATEUPLOADREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateUploadRequest;

class CreateUploadRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateUploadRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateUploadRequest * const q);
    CreateUploadRequestPrivate(const CreateUploadRequestPrivate &other,
                                   CreateUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
