// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINSTANCEPROFILEREQUEST_P_H
#define QTAWS_CREATEINSTANCEPROFILEREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "createinstanceprofilerequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateInstanceProfileRequest;

class CreateInstanceProfileRequestPrivate : public DeviceFarmRequestPrivate {

public:
    CreateInstanceProfileRequestPrivate(const DeviceFarmRequest::Action action,
                                   CreateInstanceProfileRequest * const q);
    CreateInstanceProfileRequestPrivate(const CreateInstanceProfileRequestPrivate &other,
                                   CreateInstanceProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateInstanceProfileRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
