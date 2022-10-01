// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHDISKREQUEST_P_H
#define QTAWS_DETACHDISKREQUEST_P_H

#include "lightsailrequest_p.h"
#include "detachdiskrequest.h"

namespace QtAws {
namespace Lightsail {

class DetachDiskRequest;

class DetachDiskRequestPrivate : public LightsailRequestPrivate {

public:
    DetachDiskRequestPrivate(const LightsailRequest::Action action,
                                   DetachDiskRequest * const q);
    DetachDiskRequestPrivate(const DetachDiskRequestPrivate &other,
                                   DetachDiskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
