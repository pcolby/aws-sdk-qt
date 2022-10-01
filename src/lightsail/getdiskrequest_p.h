// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKREQUEST_P_H
#define QTAWS_GETDISKREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdiskrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskRequest;

class GetDiskRequestPrivate : public LightsailRequestPrivate {

public:
    GetDiskRequestPrivate(const LightsailRequest::Action action,
                                   GetDiskRequest * const q);
    GetDiskRequestPrivate(const GetDiskRequestPrivate &other,
                                   GetDiskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDiskRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
