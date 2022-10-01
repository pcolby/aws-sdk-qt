// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHDISKREQUEST_P_H
#define QTAWS_ATTACHDISKREQUEST_P_H

#include "lightsailrequest_p.h"
#include "attachdiskrequest.h"

namespace QtAws {
namespace Lightsail {

class AttachDiskRequest;

class AttachDiskRequestPrivate : public LightsailRequestPrivate {

public:
    AttachDiskRequestPrivate(const LightsailRequest::Action action,
                                   AttachDiskRequest * const q);
    AttachDiskRequestPrivate(const AttachDiskRequestPrivate &other,
                                   AttachDiskRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
