// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEPROFILEREQUEST_P_H
#define QTAWS_DELETEINSTANCEPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deleteinstanceprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteInstanceProfileRequest;

class DeleteInstanceProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteInstanceProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteInstanceProfileRequest * const q);
    DeleteInstanceProfileRequestPrivate(const DeleteInstanceProfileRequestPrivate &other,
                                   DeleteInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
