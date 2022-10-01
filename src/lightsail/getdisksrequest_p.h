// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSREQUEST_P_H
#define QTAWS_GETDISKSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getdisksrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDisksRequest;

class GetDisksRequestPrivate : public LightsailRequestPrivate {

public:
    GetDisksRequestPrivate(const LightsailRequest::Action action,
                                   GetDisksRequest * const q);
    GetDisksRequestPrivate(const GetDisksRequestPrivate &other,
                                   GetDisksRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDisksRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
