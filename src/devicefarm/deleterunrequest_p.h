// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERUNREQUEST_P_H
#define QTAWS_DELETERUNREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "deleterunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class DeleteRunRequest;

class DeleteRunRequestPrivate : public DeviceFarmRequestPrivate {

public:
    DeleteRunRequestPrivate(const DeviceFarmRequest::Action action,
                                   DeleteRunRequest * const q);
    DeleteRunRequestPrivate(const DeleteRunRequestPrivate &other,
                                   DeleteRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRunRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
