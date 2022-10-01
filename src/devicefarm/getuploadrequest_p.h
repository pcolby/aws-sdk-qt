// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUPLOADREQUEST_P_H
#define QTAWS_GETUPLOADREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "getuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetUploadRequest;

class GetUploadRequestPrivate : public DeviceFarmRequestPrivate {

public:
    GetUploadRequestPrivate(const DeviceFarmRequest::Action action,
                                   GetUploadRequest * const q);
    GetUploadRequestPrivate(const GetUploadRequestPrivate &other,
                                   GetUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
