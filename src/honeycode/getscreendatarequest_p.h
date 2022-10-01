// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCREENDATAREQUEST_P_H
#define QTAWS_GETSCREENDATAREQUEST_P_H

#include "honeycoderequest_p.h"
#include "getscreendatarequest.h"

namespace QtAws {
namespace Honeycode {

class GetScreenDataRequest;

class GetScreenDataRequestPrivate : public HoneycodeRequestPrivate {

public:
    GetScreenDataRequestPrivate(const HoneycodeRequest::Action action,
                                   GetScreenDataRequest * const q);
    GetScreenDataRequestPrivate(const GetScreenDataRequestPrivate &other,
                                   GetScreenDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetScreenDataRequest)

};

} // namespace Honeycode
} // namespace QtAws

#endif
