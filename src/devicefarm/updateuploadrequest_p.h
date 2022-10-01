// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUPLOADREQUEST_P_H
#define QTAWS_UPDATEUPLOADREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "updateuploadrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateUploadRequest;

class UpdateUploadRequestPrivate : public DeviceFarmRequestPrivate {

public:
    UpdateUploadRequestPrivate(const DeviceFarmRequest::Action action,
                                   UpdateUploadRequest * const q);
    UpdateUploadRequestPrivate(const UpdateUploadRequestPrivate &other,
                                   UpdateUploadRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUploadRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
